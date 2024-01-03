/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:46:44 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 16:14:53 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define K 5

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

bool	isUint(char	*arg);
void	vector_sorting(char **argv);
void	list_sorting(char **argv);

#endif