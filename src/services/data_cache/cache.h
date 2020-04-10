#ifndef TELEMETRYSERVER_CACHE_H
#define TELEMETRYSERVER_CACHE_H

#include <string>
#include <vector>

/**
 * DataCache
 * Interface for a data cache
 * Stores raw data values
 * Used for all getting/setting raw data points
 */
class DataCache {
public:
    virtual ~DataCache() = default;
    virtual float getFloat(const std::string& key) = 0;
    virtual float setFloat(const std::string& key, float value) = 0;
    virtual std::vector<std::string> getKeys() = 0;
};

#endif //TELEMETRYSERVER_CACHE_H
