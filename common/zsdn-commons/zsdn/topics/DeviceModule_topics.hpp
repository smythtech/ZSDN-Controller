//
// Autogenerated Code. Changes here will be automatically overwritten.
//
// @author Andre Kutzleb
//

#ifndef ZSDN_DEVICEMODULE_H
#define ZSDN_DEVICEMODULE_H

#include <stdint.h>
#include "zmf/MessageType.hpp"

using namespace zmf::data;

namespace devicemodule_topics {

    const uint8_t TOPIC_VAL__FROM = 0x02;
    const uint16_t TOPIC_VAL__FROM__DEVICE_MODULE = 0x0002;
    const uint8_t TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT = 0x00;
    const uint8_t TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT__ADDED = 0x00;
    const uint8_t TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT__REMOVED = 0x01;
    const uint8_t TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT__CHANGED = 0x02;
    const uint8_t TOPIC_VAL__REQUEST = 0x03;
    const uint16_t TOPIC_VAL__REQUEST__DEVICE_MODULE = 0x0002;
    const uint8_t TOPIC_VAL__REQUEST__DEVICE_MODULE__GET_ALL_DEVICES = 0x00;
    const uint8_t TOPIC_VAL__REQUEST__DEVICE_MODULE__GET_DEVICE_BY_MAC_ADDRESS = 0x01;
    const uint8_t TOPIC_VAL__REQUEST__DEVICE_MODULE__GET_DEVICES_BY_FILTER = 0x02;
    const uint8_t TOPIC_VAL__REPLY = 0x04;
    const uint16_t TOPIC_VAL__REPLY__DEVICE_MODULE = 0x0002;
    const uint8_t TOPIC_VAL__REPLY__DEVICE_MODULE__GET_ALL_DEVICES = 0x00;
    const uint8_t TOPIC_VAL__REPLY__DEVICE_MODULE__GET_DEVICE_BY_MAC_ADDRESS = 0x01;
    const uint8_t TOPIC_VAL__REPLY__DEVICE_MODULE__GET_DEVICES_BY_FILTER = 0x02;

    class AbstractFactory {
    protected:
        MessageType& id;

        AbstractFactory(MessageType& f) : id(f) { }

    public:
        MessageType build() { return id; }
    };

    class FROM {
    private:
        MessageType id;
    public:
        class DEVICE_MODULE : public AbstractFactory {
        public:
            DEVICE_MODULE(MessageType& f) : AbstractFactory(f) {
                id.appendMatch16((uint16_t) TOPIC_VAL__FROM__DEVICE_MODULE);
            }

            class DEVICE_EVENT : public AbstractFactory {
            public:
                DEVICE_EVENT(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT);
                }

                class ADDED : public AbstractFactory {
                public:
                    ADDED(MessageType& f) : AbstractFactory(f) {
                        id.appendMatch8((uint8_t) TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT__ADDED);
                    }
                };

                class REMOVED : public AbstractFactory {
                public:
                    REMOVED(MessageType& f) : AbstractFactory(f) {
                        id.appendMatch8((uint8_t) TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT__REMOVED);
                    }
                };

                class CHANGED : public AbstractFactory {
                public:
                    CHANGED(MessageType& f) : AbstractFactory(f) {
                        id.appendMatch8((uint8_t) TOPIC_VAL__FROM__DEVICE_MODULE__DEVICE_EVENT__CHANGED);
                    }
                };

                ADDED added() { return ADDED(id); }

                REMOVED removed() { return REMOVED(id); }

                CHANGED changed() { return CHANGED(id); }
            };

            DEVICE_EVENT device_event() { return DEVICE_EVENT(id); }
        };

        FROM() : id() { id.appendMatch8((uint8_t) TOPIC_VAL__FROM); }

        DEVICE_MODULE device_module() { return DEVICE_MODULE(id); }
    };

    class REQUEST {
    private:
        MessageType id;
    public:
        class DEVICE_MODULE : public AbstractFactory {
        public:
            DEVICE_MODULE(MessageType& f) : AbstractFactory(f) {
                id.appendMatch16((uint16_t) TOPIC_VAL__REQUEST__DEVICE_MODULE);
            }

            class GET_ALL_DEVICES : public AbstractFactory {
            public:
                GET_ALL_DEVICES(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__DEVICE_MODULE__GET_ALL_DEVICES);
                }
            };

            class GET_DEVICE_BY_MAC_ADDRESS : public AbstractFactory {
            public:
                GET_DEVICE_BY_MAC_ADDRESS(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__DEVICE_MODULE__GET_DEVICE_BY_MAC_ADDRESS);
                }
            };

            class GET_DEVICES_BY_FILTER : public AbstractFactory {
            public:
                GET_DEVICES_BY_FILTER(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST__DEVICE_MODULE__GET_DEVICES_BY_FILTER);
                }
            };

            GET_ALL_DEVICES get_all_devices() { return GET_ALL_DEVICES(id); }

            GET_DEVICE_BY_MAC_ADDRESS get_device_by_mac_address() { return GET_DEVICE_BY_MAC_ADDRESS(id); }

            GET_DEVICES_BY_FILTER get_devices_by_filter() { return GET_DEVICES_BY_FILTER(id); }
        };

        REQUEST() : id() { id.appendMatch8((uint8_t) TOPIC_VAL__REQUEST); }

        DEVICE_MODULE device_module() { return DEVICE_MODULE(id); }
    };

    class REPLY {
    private:
        MessageType id;
    public:
        class DEVICE_MODULE : public AbstractFactory {
        public:
            DEVICE_MODULE(MessageType& f) : AbstractFactory(f) {
                id.appendMatch16((uint16_t) TOPIC_VAL__REPLY__DEVICE_MODULE);
            }

            class GET_ALL_DEVICES : public AbstractFactory {
            public:
                GET_ALL_DEVICES(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__DEVICE_MODULE__GET_ALL_DEVICES);
                }
            };

            class GET_DEVICE_BY_MAC_ADDRESS : public AbstractFactory {
            public:
                GET_DEVICE_BY_MAC_ADDRESS(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__DEVICE_MODULE__GET_DEVICE_BY_MAC_ADDRESS);
                }
            };

            class GET_DEVICES_BY_FILTER : public AbstractFactory {
            public:
                GET_DEVICES_BY_FILTER(MessageType& f) : AbstractFactory(f) {
                    id.appendMatch8((uint8_t) TOPIC_VAL__REPLY__DEVICE_MODULE__GET_DEVICES_BY_FILTER);
                }
            };

            GET_ALL_DEVICES get_all_devices() { return GET_ALL_DEVICES(id); }

            GET_DEVICE_BY_MAC_ADDRESS get_device_by_mac_address() { return GET_DEVICE_BY_MAC_ADDRESS(id); }

            GET_DEVICES_BY_FILTER get_devices_by_filter() { return GET_DEVICES_BY_FILTER(id); }
        };

        REPLY() : id() { id.appendMatch8((uint8_t) TOPIC_VAL__REPLY); }

        DEVICE_MODULE device_module() { return DEVICE_MODULE(id); }
    };


} // namespace devicemodule_topics

#endif //ZSDN_DEVICEMODULE_H
