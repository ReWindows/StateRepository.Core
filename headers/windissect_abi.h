// Windissect recovered ABI metadata — DO NOT EDIT.
// Portable across C++17, C++20, C++23, and C++26 draft modes.
#pragma once
#include <cstddef>
#include <cstdint>

namespace windissect_abi {
struct TypeLayout { const char* name; std::uint64_t size; const char* kind; };
struct FieldLayout { const char* owner; const char* name; std::uint32_t type_index; std::uint64_t offset; bool is_static; };
struct FieldObservation { const char* owner; const char* suggested_name; std::uint64_t offset; std::uint32_t width; const char* access; std::uint32_t evidence_rva; const char* evidence_symbol; const char* confidence; };
struct BaseLayout { const char* derived; const char* base; std::int64_t offset; bool is_virtual; const char* evidence; const char* confidence; };
struct VTableLayout { const char* name; std::uint32_t rva; std::uint32_t slots; const char* evidence; const char* confidence; };
struct VTableSlotLayout { std::uint32_t table_rva; std::uint32_t slot; std::uint32_t target_rva; const char* target_id; const char* target_name; bool ambiguous; std::int32_t this_adjustment; };

inline constexpr TypeLayout types[] = {
    {nullptr, 0, nullptr},
};
inline constexpr std::size_t type_count = (sizeof(types) / sizeof(types[0])) - 1;
inline constexpr FieldLayout fields[] = {
    {nullptr, nullptr, 0, 0, false},
};
inline constexpr std::size_t field_count = (sizeof(fields) / sizeof(fields[0])) - 1;
inline constexpr FieldObservation field_observations[] = {
    {nullptr, nullptr, 0, 0, nullptr, 0, nullptr, nullptr},
};
inline constexpr std::size_t field_observation_count = (sizeof(field_observations) / sizeof(field_observations[0])) - 1;
inline constexpr BaseLayout bases[] = {
    {nullptr, nullptr, -1, false, nullptr, nullptr},
};
inline constexpr std::size_t base_count = (sizeof(bases) / sizeof(bases[0])) - 1;
inline constexpr VTableLayout vtables[] = {
    {nullptr, 0, 0, nullptr, nullptr},
};
inline constexpr std::size_t vtable_count = (sizeof(vtables) / sizeof(vtables[0])) - 1;
inline constexpr VTableSlotLayout vtable_slots[] = {
    {0, 0, 0, nullptr, nullptr, true, 0},
};
inline constexpr std::size_t vtable_slot_count = (sizeof(vtable_slots) / sizeof(vtable_slots[0])) - 1;
}
