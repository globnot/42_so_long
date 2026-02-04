#!/bin/bash

G='\033[1;32m'
R='\033[0;31m'
Y='\033[1;33m'
B='\033[1;36m'
NC='\033[0m'

echo -e "${Y}=======================================${NC}"
echo -e "${Y}     TESTS VALIDES${NC}"
echo -e "${Y}=======================================${NC}"

echo -e "${B}MAP VALIDE SIMPLE${NC}"
./so_long "maps/valid_42.ber"
echo -e "RETURN: ${R}$?${NC}"
