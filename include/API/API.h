#pragma once
#include <DataType.h>

class API {
    public:
    static void createTable(const std::string &tableName,
                            const std::string &primaryKey,
                            const std::vector<Attribute> &attributes);

    static void dropTable(const std::string &tableName);

    static void createIndex(const std::string &indexName,
                            const std::string &tableName,
                            const std::string &attributeName);

    static void dropIndex(const std::string &indexName);

    static void select(const std::vector<const std::string> &attributes,
                       const std::string &tableName,
                       const std::vector<QueryCondition> &queryConditions);

    static void insert(const std::string &tableName,
                       const std::vector<Value> &values);

    static void deleteFrom(const std::string &tableName,
                           const std::vector<QueryCondition> &queryConditions);
    static void quit();

    static void execfile(const std::string& filePath);
};