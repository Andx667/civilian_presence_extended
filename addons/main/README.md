# Civilian Presence Extended - Main Module

## Overview
This is the core module of Civilian Presence Extended that provides the base functionality and macros for all compatibility modules.

## Purpose
Defines the essential configuration, macros, and scripts required for the Civilian Presence Extended system to function.

## Contents

### Configuration Files
- `config.cpp` - Main addon configuration
- `script_component.hpp` - Component-specific script definitions
- `script_macros.hpp` - Core macros including the CREATE_AGENT macro
- `script_mod.hpp` - Mod identification and metadata
- `script_version.hpp` - Version information
- `stringtable.xml` - Localization strings

### Key Features

#### CREATE_AGENT Macro
The main macro used across all compatibility modules to create civilian agent classes. This macro:
- Creates a new class inheriting from a base civilian unit
- Adds the "CivilianPresence_" prefix to distinguish agent variants
- Configures the unit for use in ambient civilian systems

### Data Files
Located in `data/hpp/`:
- `defineDIKCodes.hpp` - DirectInput keyboard codes definitions

## Dependencies
This module is required by all compatibility modules (3cbf_compat, cfp_compat, cup_compat, gm_compat, po_compat, sog_compat, vanilla_compat).

## Notes
- This module must load before any compatibility modules
- Contains no actual civilian units - only the framework
- Compatibility modules use the macros defined here to create agent classes
