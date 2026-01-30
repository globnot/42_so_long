/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:19:02 by aborda            #+#    #+#             */
/*   Updated: 2026/01/30 11:35:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define ERR_OK 0
# define ERR_MALLOC 1
# define ERR_MAP_ELEMENTS 21
# define ERR_MAP_FORMAT 22
# define ERR_CHECK_PATH 23
# define ERR_INIT_S_MAP 31
# define ERR_INIT_S_FLOOD 32

int	err_msg(int err_code);

#endif
