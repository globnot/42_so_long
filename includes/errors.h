/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:19:02 by aborda            #+#    #+#             */
/*   Updated: 2026/01/28 10:34:47 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define ERR_OK 0
# define ERR_MALLOC 1
# define ERR_MAP_ELEMENTS 11
# define ERR_MAP_FORMAT 12

int error_msg(int err_code);

#endif
