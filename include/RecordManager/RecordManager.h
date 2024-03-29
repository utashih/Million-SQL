#pragma once
#include <BufferManager/BufferManager.h>
#include <CatalogManager/CatalogManager.h>
#include <DataType.h>
#include <string>

namespace RM {

void init();
void exit();

bool hasTable(const std::string &);
void createTable(const std::string &);
void dropTable(const std::string &);
uint32_t insertRecord(const std::string &, const Record &);
int deleteAllRecords(const std::string &);
int deleteRecords(const std::string &, const std::vector<uint32_t> &);
int deleteRecords(std::shared_ptr<Schema>, const std::vector<Predicate> &);
std::vector<Record> selectRecords(std::shared_ptr<Schema>,
                                  const std::vector<Predicate> &);
std::vector<Record> selectRecordsWithOffsets(std::shared_ptr<Schema>,
                                             const std::vector<Predicate> &,
                                             const std::vector<uint32_t> &);
std::vector<Record> project(const std::vector<Record> &,
                            std::shared_ptr<Schema>,
                            const std::vector<std::string> &);

} // namespace RM
