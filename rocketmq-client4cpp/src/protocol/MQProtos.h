/**
* Copyright (C) 2013 kangliqiang ,kangliq@163.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef __MQPROTOS_H__
#define __MQPROTOS_H__

namespace rmq
{
    enum MQRequestCode
    {
        // broker
        SEND_MESSAGE_VALUE = 10,
        PULL_MESSAGE_VALUE = 11,
        QUERY_MESSAGE_VALUE = 12,
        QUERY_BROKER_OFFSET_VALUE = 13,
        QUERY_CONSUMER_OFFSET_VALUE = 14,
        UPDATE_CONSUMER_OFFSET_VALUE = 15,
        UPDATE_AND_CREATE_TOPIC_VALUE = 17,

        GET_ALL_TOPIC_CONFIG_VALUE = 21,
        GET_TOPIC_CONFIG_LIST_VALUE = 22,
        GET_TOPIC_NAME_LIST_VALUE = 23,
        UPDATE_BROKER_CONFIG_VALUE = 25,
        GET_BROKER_CONFIG_VALUE = 26,
        TRIGGER_DELETE_FILES_VALUE = 27,
        GET_BROKER_RUNTIME_INFO_VALUE = 28,
        SEARCH_OFFSET_BY_TIMESTAMP_VALUE = 29,

        GET_MAX_OFFSET_VALUE = 30,
        GET_MIN_OFFSET_VALUE = 31,
        GET_EARLIEST_MSG_STORETIME_VALUE = 32,
        VIEW_MESSAGE_BY_ID_VALUE = 33,
        HEART_BEAT_VALUE = 34,
        UNREGISTER_CLIENT_VALUE = 35,
        CONSUMER_SEND_MSG_BACK_VALUE = 36,
        END_TRANSACTION_VALUE = 37,
        GET_CONSUMER_LIST_BY_GROUP_VALUE = 38,
        CHECK_TRANSACTION_STATE_VALUE = 39,

        NOTIFY_CONSUMER_IDS_CHANGED_VALUE = 40,
        LOCK_BATCH_MQ_VALUE = 41,
        UNLOCK_BATCH_MQ_VALUE = 42,
        GET_ALL_CONSUMER_OFFSET_VALUE = 43,
        GET_ALL_DELAY_OFFSET_VALUE = 45,

        // Namesrv
        PUT_KV_CONFIG_VALUE = 100,
        GET_KV_CONFIG_VALUE = 101,
        DELETE_KV_CONFIG_VALUE = 102,
        REGISTER_BROKER_VALUE = 103,
        UNREGISTER_BROKER_VALUE = 104,
        GET_ROUTEINTO_BY_TOPIC_VALUE = 105,
        GET_BROKER_CLUSTER_INFO_VALUE = 106,

        // broker && namesrv
        UPDATE_AND_CREATE_SUBSCRIPTIONGROUP_VALUE = 200,
        GET_ALL_SUBSCRIPTIONGROUP_CONFIG_VALUE = 201,
        GET_TOPIC_STATS_INFO_VALUE = 202,
        GET_CONSUMER_CONNECTION_LIST_VALUE = 203,
        GET_PRODUCER_CONNECTION_LIST_VALUE = 204,
        WIPE_WRITE_PERM_OF_BROKER_VALUE = 205,
        GET_ALL_TOPIC_LIST_FROM_NAMESERVER_VALUE = 206,
        DELETE_SUBSCRIPTIONGROUP_VALUE = 207,
        GET_CONSUME_STATS_VALUE = 208,
        SUSPEND_CONSUMER_VALUE = 209,

        RESUME_CONSUMER_VALUE = 210,
        RESET_CONSUMER_OFFSET_IN_CONSUMER_VALUE = 211,
        RESET_CONSUMER_OFFSET_IN_BROKER_VALUE = 212,
        ADJUST_CONSUMER_THREAD_POOL_VALUE = 213,
        WHO_CONSUME_THE_MESSAGE_VALUE = 214,
        DELETE_TOPIC_IN_BROKER_VALUE = 215,
        DELETE_TOPIC_IN_NAMESRV_VALUE = 216,
        GET_KV_CONFIG_BY_VALUE_VALUE = 217,
        DELETE_KV_CONFIG_BY_VALUE_VALUE = 218,
        GET_KVLIST_BY_NAMESPACE_VALUE = 219,

        RESET_CONSUMER_CLIENT_OFFSET_VALUE = 220,
        GET_CONSUMER_STATUS_FROM_CLIENT_VALUE = 221,
        INVOKE_BROKER_TO_RESET_OFFSET_VALUE = 222,
        INVOKE_BROKER_TO_GET_CONSUMER_STATUS_VALUE = 223,
        GET_TOPICS_BY_CLUSTER_VALUE = 224,

        QUERY_TOPIC_CONSUME_BY_WHO_VALUE = 300,
        REGISTER_FILTER_SERVER_VALUE = 301,
        REGISTER_MESSAGE_FILTER_CLASS_VALUE = 302,
        QUERY_CONSUME_TIME_SPAN_VALUE = 303,
        GET_SYSTEM_TOPIC_LIST_FROM_NS_VALUE = 304,
        GET_SYSTEM_TOPIC_LIST_FROM_BROKER_VALUE = 305,
        CLEAN_EXPIRED_CONSUMEQUEUE_VALUE = 306,
        GET_CONSUMER_RUNNING_INFO_VALUE = 307,
        QUERY_CORRECTION_OFFSET_VALUE = 308,
        CONSUME_MESSAGE_DIRECTLY_VALUE = 309,

        SEND_MESSAGE_V2_VALUE = 310,
        GET_UNIT_TOPIC_LIST_VALUE = 311,
        GET_HAS_UNIT_SUB_TOPIC_LIST_VALUE = 312,
        GET_HAS_UNIT_SUB_UNUNIT_TOPIC_LIST_VALUE = 313,
        CLONE_GROUP_OFFSET_VALUE = 314,
        VIEW_BROKER_STATS_DATA_VALUE = 315,
    };

    enum MQResponseCode
    {
        FLUSH_DISK_TIMEOUT_VALUE = 10,
        SLAVE_NOT_AVAILABLE_VALUE = 11,
        FLUSH_SLAVE_TIMEOUT_VALUE = 12,
        MESSAGE_ILLEGAL_VALUE = 13,
        SERVICE_NOT_AVAILABLE_VALUE = 14,
        VERSION_NOT_SUPPORTED_VALUE = 15,
        NO_PERMISSION_VALUE = 16,
        TOPIC_NOT_EXIST_VALUE = 17,
        TOPIC_EXIST_ALREADY_VALUE = 18,
        PULL_NOT_FOUND_VALUE = 19,

        PULL_RETRY_IMMEDIATELY_VALUE = 20,
        PULL_OFFSET_MOVED_VALUE = 21,
        QUERY_NOT_FOUND_VALUE = 22,
        SUBSCRIPTION_PARSE_FAILED_VALUE = 23,
        SUBSCRIPTION_NOT_EXIST_VALUE = 24,
        SUBSCRIPTION_NOT_LATEST_VALUE = 25,
        SUBSCRIPTION_GROUP_NOT_EXIST_VALUE = 26,

        TRANSACTION_SHOULD_COMMIT_VALUE = 200,
        TRANSACTION_SHOULD_ROLLBACK_VALUE = 201,
        TRANSACTION_STATE_UNKNOW_VALUE = 202,
        TRANSACTION_STATE_GROUP_WRONG_VALUE = 203,
		NO_BUYER_ID_VALUE = 204,
		NOT_IN_CURRENT_UNIT_VALUE = 205,
		CONSUMER_NOT_ONLINE_VALUE = 206,
		CONSUME_MSG_TIMEOUT_VALUE = 207,
    };

	const char* getMQRequestCodeString(int code);
	const char* getMQResponseCodeString(int code);
}

#endif
