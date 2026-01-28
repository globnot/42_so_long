#!/bin/bash

G='\033[1;32m'
R='\033[0;31m'
Y='\033[1;33m'
B='\033[1;36m'
NC='\033[0m'

echo -e "${G}=======================================${NC}"
echo -e "${G}     SO_LONG - TESTS${NC}"
echo -e "${G}=======================================${NC}"

# Test 1 : Map valide
echo -e "\n${B}MAP VALIDE${NC}"
RESULT=$(./so_long "maps/map_valid.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

# Test 2 : Map invalide
echo -e "\n${B}MAP INVALIDE${NC}"
RESULT=$(./so_long "maps/map_invalid.ber")
echo -e "RETURN: ${R}$?${NC}"
echo -e "$RESULT"
