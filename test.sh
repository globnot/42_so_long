#!/bin/bash

G='\033[1;32m'
R='\033[0;31m'
Y='\033[1;33m'
B='\033[1;36m'
NC='\033[0m'

echo -e "${Y}=======================================${NC}"
echo -e "${Y}     TESTS VALIDES${NC}"
echo -e "${Y}=======================================${NC}"

echo -e "\n${B}MAP VALIDE SIMPLE${NC}"
RESULT=$(./so_long "maps/valid_simple.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "${B}MAP VALIDE BIG${NC}"
RESULT=$(./so_long "maps/valid_big.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "${B}MAP VALIDE MINIMAL${NC}"
RESULT=$(./so_long "maps/valid_minimal.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "${B}MAP VALIDE MULTIPLE COLLECTIBLE${NC}"
RESULT=$(./so_long "maps/valid_multiple_collectibles.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${Y}=======================================${NC}"
echo -e "${Y}     TESTS INVALIDES - FORMAT${NC}"
echo -e "${Y}=======================================${NC}\n"

echo -e "${B}MAP INVALIDE - NOT RECTANGULAR${NC}"
RESULT=$(./so_long "maps/invalid_not_rectangular.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - NOT CLOSED TOP${NC}"
RESULT=$(./so_long "maps/invalid_not_closed_top.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - NOT CLOSED SIDE${NC}"
RESULT=$(./so_long "maps/invalid_not_closed_side.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${Y}=======================================${NC}"
echo -e "${Y}     TESTS INVALIDES - CARACTERES${NC}"
echo -e "${Y}=======================================${NC}\n"

echo -e "${B}MAP INVALIDE - BAD CHAR${NC}"
RESULT=$(./so_long "maps/invalid_bad_char.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${Y}=======================================${NC}"
echo -e "${Y}     TESTS INVALIDES - ELEMENTS${NC}"
echo -e "${Y}=======================================${NC}\n"

echo -e "${B}MAP INVALIDE - NO EXIT${NC}"
RESULT=$(./so_long "maps/invalid_no_exit.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - NO PLAYER${NC}"
RESULT=$(./so_long "maps/invalid_no_player.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - NO COLLECTIBLE${NC}"
RESULT=$(./so_long "maps/invalid_no_collectible.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - MULTIPLE EXITS${NC}"
RESULT=$(./so_long "maps/invalid_multiple_exits.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - MULTIPLE PLAYERS${NC}"
RESULT=$(./so_long "maps/invalid_multiple_players.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${Y}=======================================${NC}"
echo -e "${Y}     TESTS INVALIDES - CHEMIN${NC}"
echo -e "${Y}=======================================${NC}\n"

echo -e "${B}MAP INVALIDE - NO PATH TO COLLECTIBLE${NC}"
RESULT=$(./so_long "maps/invalid_no_path_to_collectible.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - NO PATH TO EXIT${NC}"
RESULT=$(./so_long "maps/invalid_no_path_to_exit.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"

echo -e "\n${B}MAP INVALIDE - TOO SMALL${NC}"
RESULT=$(./so_long "maps/invalid_too_small.ber")
echo -e "RETURN: ${R}$?${NC}"
echo "$RESULT"
