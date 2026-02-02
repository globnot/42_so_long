#!/bin/bash

G='\033[1;32m'
R='\033[0;31m'
Y='\033[1;33m'
B='\033[1;36m'
NC='\033[0m'

echo -e "${Y}=======================================${NC}"
echo -e "${Y}     TESTS VALIDES${NC}"
echo -e "${Y}=======================================${NC}"

# echo -e "${B}MAP VALIDE MAP${NC}"
# ./so_long "maps/valid_map.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
echo -e "${B}MAP VALIDE SIMPLE${NC}"
./so_long "maps/valid_simple.ber"
echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP VALIDE BIG${NC}"
# ./so_long "maps/valid_big.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP VALIDE MINIMAL${NC}"
# ./so_long "maps/valid_minimal.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP VALIDE MULTIPLE COLLECTIBLE${NC}"
# ./so_long "maps/valid_multiple_collectibles.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${Y}=======================================${NC}"
# echo -e "${Y}     TESTS INVALIDES - FORMAT${NC}"
# echo -e "${Y}=======================================${NC}"
#
# echo -e "${B}MAP INVALIDE - NOT RECTANGULAR${NC}"
# ./so_long "maps/invalid_not_rectangular.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - NOT CLOSED TOP${NC}"
# ./so_long "maps/invalid_not_closed_top.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - NOT CLOSED SIDE${NC}"
# ./so_long "maps/invalid_not_closed_side.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${Y}=======================================${NC}"
# echo -e "${Y}     TESTS INVALIDES - CARACTERES${NC}"
# echo -e "${Y}=======================================${NC}"
#
# echo -e "${B}MAP INVALIDE - BAD CHAR${NC}"
# ./so_long "maps/invalid_bad_char.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${Y}=======================================${NC}"
# echo -e "${Y}     TESTS INVALIDES - ELEMENTS${NC}"
# echo -e "${Y}=======================================${NC}"
#
# echo -e "${B}MAP INVALIDE - NO EXIT${NC}"
# ./so_long "maps/invalid_no_exit.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - NO PLAYER${NC}"
# ./so_long "maps/invalid_no_player.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - NO COLLECTIBLE${NC}"
# ./so_long "maps/invalid_no_collectible.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - MULTIPLE EXITS${NC}"
# ./so_long "maps/invalid_multiple_exits.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - MULTIPLE PLAYERS${NC}"
# ./so_long "maps/invalid_multiple_players.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${Y}=======================================${NC}"
# echo -e "${Y}     TESTS INVALIDES - CHEMIN${NC}"
# echo -e "${Y}=======================================${NC}"
#
# echo -e "${B}MAP INVALIDE - NO PATH TO COLLECTIBLE${NC}"
# ./so_long "maps/invalid_no_path_to_collectible.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - NO PATH TO EXIT${NC}"
# ./so_long "maps/invalid_no_path_to_exit.ber"
# echo -e "RETURN: ${R}$?${NC}"
#
# echo -e "${B}MAP INVALIDE - TOO SMALL${NC}"
# ./so_long "maps/invalid_too_small.ber"
# echo -e "RETURN: ${R}$?${NC}"
