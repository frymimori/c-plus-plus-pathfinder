namespace {
	unsigned long D(unsigned long * a, unsigned long * b, unsigned long c, unsigned long d, unsigned long e, unsigned long f, unsigned long g, unsigned long h, unsigned long i, unsigned long j, unsigned long k, unsigned long l, unsigned long m, unsigned char * n) {
		unsigned long o = k;
		unsigned long p = 0;
		unsigned long q = 0;
		unsigned long r;
		unsigned long s;
		unsigned long t;
		unsigned char u = (f <= h) + (f == h);
		l++;

		if (g < i) {
			u += 4;
		} else {
			if (g == i) {
				u += 8;
			}
		}

		if (
			(u & 1) == 0 &&
			u != 6
		) {
			if (
				u == 2 ||
				u == 8
			) {
				if (u == 2) {
					g--;
					k--;

					while (
						n[k] < 5 &&
						g != i
					) {
						g--;
						l++;
						n[k] += 8;
						k--;
					}

					u = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								m++;
								s = e;
								t = n[k];
								n[k] = 6;

								while (s != 0) {
									s--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[s] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = t;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b < m
							) {
								p = l;
								u = 1;
							}
						}
					}

					g++;
					k++;

					if (u == 0) {
						if (p == 0) {
							while (k != o) {
								g++;
								n[k] -= 8;
								k++;
							}
						} else {
							while (k != o) {
								g++;
								n[k] = 4;
								k++;
							}
						}
					} else {
						while (k != o) {
							g++;
							n[k] = 8;
							k++;
						}
					}
				} else {
					f--;
					k -= d;

					while (
						n[k] < 5 &&
						f != h
					) {
						f--;
						l++;
						n[k] += 8;
						k -= d;
					}

					u = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								m++;
								s = e;
								t = n[k];
								n[k] = 6;

								while (s != 0) {
									s--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[s] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = t;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b < m
							) {
								p = l;
								u = 1;
							}
						}
					}

					f++;
					k += d;

					if (u == 0) {
						if (p == 0) {
							while (k != o) {
								f++;
								n[k] -= 8;
								k += d;
							}
						} else {
							while (k != o) {
								f++;
								n[k] = 4;
								k += d;
							}
						}
					} else {
						while (k != o) {
							f++;
							n[k] = 8;
							k += d;
						}
					}
				}
			} else {
				if (u == 4) {
					r = k + 1;
					u = 0;

					if (n[r] == 7) {
						f--;
						k -= d;

						while (
							n[k] < 5 &&
							f != h
						) {
							f--;
							l++;
							n[k] += 8;
							k -= d;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								g++;
								l++;
								n[k] += 8;
								r = k;
								k++;

								while (
									n[k] < 5 &&
									g != i
								) {
									g++;
									l++;
									n[k] += 8;
									k++;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									g--;
									k--;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												g--;
												n[k] -= 8;
												k--;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												g--;
												n[k] = 4;
												k--;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											g--;
											n[k] = 8;
											k--;
										}

										n[k] = 8;
									}
								} else {
									g--;
									k--;

									while (k != r) {
										g--;
										n[k] -= 8;
										k--;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						f++;
						k += d;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									f++;
									n[k] -= 8;
									k += d;
								}
							} else {
								while (k != o) {
									f++;
									n[k] = 4;
									k += d;
								}
							}
						} else {
							while (k != o) {
								f++;
								n[k] = 8;
								k += d;
							}
						}
					} else {
						g++;
						k++;

						while (
							n[k] < 5 &&
							g != i
						) {
							g++;
							l++;
							n[k] += 8;
							k++;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								f--;
								l++;
								n[k] += 8;
								r = k;
								k -= d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f--;
									l++;
									n[k] += 8;
									k -= d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									f++;
									k += d;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												f++;
												n[k] -= 8;
												k += d;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												f++;
												n[k] = 4;
												k += d;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											f++;
											n[k] = 8;
											k += d;
										}

										n[k] = 8;
									}
								} else {
									f++;
									k += d;

									while (k != r) {
										f++;
										n[k] -= 8;
										k += d;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						g--;
						k--;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									g--;
									n[k] -= 8;
									k--;
								}
							} else {
								while (k != o) {
									g--;
									n[k] = 4;
									k--;
								}
							}
						} else {
							while (k != o) {
								g--;
								n[k] = 8;
								k--;
							}
						}
					}
				} else {
					r = k - 1;
					u = 0;

					if (n[r] == 7) {
						f--;
						k -= d;

						while (
							n[k] < 5 &&
							f != h
						) {
							f--;
							l++;
							n[k] += 8;
							k -= d;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								g--;
								l++;
								n[k] += 8;
								r = k;
								k--;

								while (
									n[k] < 5 &&
									g != i
								) {
									g--;
									l++;
									n[k] += 8;
									k--;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									g++;
									k++;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												g++;
												n[k] -= 8;
												k++;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												g++;
												n[k] = 4;
												k++;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											g++;
											n[k] = 8;
											k++;
										}

										n[k] = 8;
									}
								} else {
									g++;
									k++;

									while (k != r) {
										g++;
										n[k] -= 8;
										k++;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						f++;
						k += d;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									f++;
									n[k] -= 8;
									k += d;
								}
							} else {
								while (k != o) {
									f++;
									n[k] = 4;
									k += d;
								}
							}
						} else {
							while (k != o) {
								f++;
								n[k] = 8;
								k += d;
							}
						}
					} else {
						g--;
						k--;

						while (
							n[k] < 5 &&
							g != i
						) {
							g--;
							l++;
							n[k] += 8;
							k--;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								f--;
								l++;
								n[k] += 8;
								r = k;
								k -= d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f--;
									l++;
									n[k] += 8;
									k -= d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									f++;
									k += d;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												f++;
												n[k] -= 8;
												k += d;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												f++;
												n[k] = 4;
												k += d;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											f++;
											n[k] = 8;
											k += d;
										}

										n[k] = 8;
									}
								} else {
									f++;
									k += d;

									while (k != r) {
										f++;
										n[k] -= 8;
										k += d;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						g++;
						k++;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									g++;
									n[k] -= 8;
									k++;
								}
							} else {
								while (k != o) {
									g++;
									n[k] = 4;
									k++;
								}
							}
						} else {
							while (k != o) {
								g++;
								n[k] = 8;
								k++;
							}
						}
					}
				}
			}
		} else {
			if (
				u == 6 ||
				u == 9
			) {
				if (u == 6) {
					g++;
					k++;

					while (
						n[k] < 5 &&
						g != i
					) {
						g++;
						l++;
						n[k] += 8;
						k++;
					}

					u = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								m++;
								s = e;
								t = n[k];
								n[k] = 6;

								while (s != 0) {
									s--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[s] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = t;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b < m
							) {
								p = l;
								u = 1;
							}
						}
					}

					g--;
					k--;

					if (u == 0) {
						if (p == 0) {
							while (k != o) {
								g--;
								n[k] -= 8;
								k--;
							}
						} else {
							while (k != o) {
								g--;
								n[k] = 4;
								k--;
							}
						}
					} else {
						while (k != o) {
							g--;
							n[k] = 8;
							k--;
						}
					}
				} else {
					f++;
					k += d;

					while (
						n[k] < 5 &&
						f != h
					) {
						f++;
						l++;
						n[k] += 8;
						k += d;
					}

					u = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								m++;
								s = e;
								t = n[k];
								n[k] = 6;

								while (s != 0) {
									s--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[s] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = t;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b < m
							) {
								p = l;
								u = 1;
							}
						}
					}

					f--;
					k -= d;

					if (u == 0) {
						if (p == 0) {
							while (k != o) {
								f--;
								n[k] -= 8;
								k -= d;
							}
						} else {
							while (k != o) {
								f--;
								n[k] = 4;
								k -= d;
							}
						}
					} else {
						while (k != o) {
							f--;
							n[k] = 8;
							k -= d;
						}
					}
				}
			} else {
				if (u == 1) {
					r = k - 1;
					u = 0;

					if (n[r] == 7) {
						f++;
						k += d;

						while (
							n[k] < 5 &&
							f != h
						) {
							f++;
							l++;
							n[k] += 8;
							k += d;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								g--;
								l++;
								n[k] += 8;
								r = k;
								k--;

								while (
									n[k] < 5 &&
									g != i
								) {
									g--;
									l++;
									n[k] += 8;
									k--;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									g++;
									k++;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												g++;
												n[k] -= 8;
												k++;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												g++;
												n[k] = 4;
												k++;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											g++;
											n[k] = 8;
											k++;
										}

										n[k] = 8;
									}
								} else {
									g++;
									k++;

									while (k != r) {
										g++;
										n[k] -= 8;
										k++;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						f--;
						k -= d;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									f--;
									n[k] -= 8;
									k -= d;
								}
							} else {
								while (k != o) {
									f--;
									n[k] = 4;
									k -= d;
								}
							}
						} else {
							while (k != o) {
								f--;
								n[k] = 8;
								k -= d;
							}
						}
					} else {
						g--;
						k--;

						while (
							n[k] < 5 &&
							g != i
						) {
							g--;
							l++;
							n[k] += 8;
							k--;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								f++;
								l++;
								n[k] += 8;
								r = k;
								k += d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f++;
									l++;
									n[k] += 8;
									k += d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									f--;
									k -= d;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												f--;
												n[k] -= 8;
												k -= d;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												f--;
												n[k] = 4;
												k -= d;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											f--;
											n[k] = 8;
											k -= d;
										}

										n[k] = 8;
									}
								} else {
									f--;
									k -= d;

									while (k != r) {
										f--;
										n[k] -= 8;
										k -= d;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						g++;
						k++;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									g++;
									n[k] -= 8;
									k++;
								}
							} else {
								while (k != o) {
									g++;
									n[k] = 4;
									k++;
								}
							}
						} else {
							while (k != o) {
								g++;
								n[k] = 8;
								k++;
							}
						}
					}
				} else {
					r = k + 1;
					u = 0;

					if (n[r] == 7) {
						f++;
						k += d;

						while (
							n[k] < 5 &&
							f != h
						) {
							f++;
							l++;
							n[k] += 8;
							k += d;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								g++;
								l++;
								n[k] += 8;
								r = k;
								k++;

								while (
									n[k] < 5 &&
									g != i
								) {
									g++;
									l++;
									n[k] += 8;
									k++;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									g--;
									k--;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												g--;
												n[k] -= 8;
												k--;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												g--;
												n[k] = 4;
												k--;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											g--;
											n[k] = 8;
											k--;
										}

										n[k] = 8;
									}
								} else {
									g--;
									k--;

									while (k != r) {
										g--;
										n[k] -= 8;
										k--;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						f--;
						k -= d;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									f--;
									n[k] -= 8;
									k -= d;
								}
							} else {
								while (k != o) {
									f--;
									n[k] = 4;
									k -= d;
								}
							}
						} else {
							while (k != o) {
								f--;
								n[k] = 8;
								k -= d;
							}
						}
					} else {
						g++;
						k++;

						while (
							n[k] < 5 &&
							g != i
						) {
							g++;
							l++;
							n[k] += 8;
							k++;
						}

						if (*a >= l) {
							if (n[k] < 5) {
								f++;
								l++;
								n[k] += 8;
								r = k;
								k += d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f++;
									l++;
									n[k] += 8;
									k += d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b < m
										) {
											p = l;
											u = 1;
										}
									}

									f--;
									k -= d;

									if (u == 0) {
										if (p == 0) {
											while (k != r) {
												f--;
												n[k] -= 8;
												k -= d;
											}

											n[k] -= 8;
										} else {
											while (k != r) {
												f--;
												n[k] = 4;
												k -= d;
											}

											n[k] = 4;
										}
									} else {
										while (k != r) {
											f--;
											n[k] = 8;
											k -= d;
										}

										n[k] = 8;
									}
								} else {
									f--;
									k -= d;

									while (k != r) {
										f--;
										n[k] -= 8;
										k -= d;
									}

									n[k] -= 8;
								}
							} else {
								if (j != k) {
									if (
										f == h &&
										g == i
									) {
										h = c;
										i = d;
										m++;
										s = e;
										t = n[k];
										n[k] = 6;

										while (s != 0) {
											s--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[s] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = D(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = t;
										} else {
											n[k] = 9;
										}
									}
								} else {
									if (
										*a != l ||
										*b < m
									) {
										p = l;
										u = 1;
									}
								}
							}
						}

						g--;
						k--;

						if (u == 0) {
							if (p == 0) {
								while (k != o) {
									g--;
									n[k] -= 8;
									k--;
								}
							} else {
								while (k != o) {
									g--;
									n[k] = 4;
									k--;
								}
							}
						} else {
							while (k != o) {
								g--;
								n[k] = 8;
								k--;
							}
						}
					}
				}
			}
		}

		if (u == 1) {
			*a = p;
			*b = m;

			while (e != 0) {
				e--;

				if (n[e] != 0) {
					if ((n[e] & 9) != 1) {
						n[e] -= 4;
					}
				}
			}
		}

		return p;
	}

	unsigned long C(unsigned long * a, unsigned long * b, unsigned long c, unsigned long d, unsigned long e, unsigned long f, unsigned long g, unsigned long h, unsigned long i, unsigned long j, unsigned long k, unsigned long l, unsigned long m, unsigned char * n) {
		unsigned long o = k;
		unsigned long p = 0;
		unsigned long q = 0;
		unsigned long r;
		unsigned long s;
		unsigned long t;
		unsigned long u;
		unsigned char v = (f <= h) + (f == h);
		l++;

		if (g < i) {
			v += 4;
		} else {
			if (g == i) {
				v += 8;
			}
		}

		if (
			(v & 1) == 0 &&
			v != 6
		) {
			if (
				v == 2 ||
				v == 8
			) {
				if (v == 2) {
					g--;
					k--;

					while (
						n[k] < 5 &&
						g != i
					) {
						g--;
						l++;
						n[k] += 8;
						k--;
					}

					v = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								t = e;
								u = n[k];
								n[k] = 6;

								while (t != 0) {
									t--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[t] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = u;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b > m
							) {
								p = l;
								v = 1;
							}
						}
					}

					g++;
					k++;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								g++;
								n[k] -= 8;
								k++;
							}
						} else {
							while (k != o) {
								g++;
								n[k] = 4;
								k++;
							}
						}
					} else {
						while (k != o) {
							g++;
							n[k] = 8;
							k++;
						}
					}
				} else {
					f--;
					k -= d;

					while (
						n[k] < 5 &&
						f != h
					) {
						f--;
						l++;
						n[k] += 8;
						k -= d;
					}

					v = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								t = e;
								u = n[k];
								n[k] = 6;

								while (t != 0) {
									t--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[t] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = u;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b > m
							) {
								p = l;
								v = 1;
							}
						}
					}

					f++;
					k += d;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								f++;
								n[k] -= 8;
								k += d;
							}
						} else {
							while (k != o) {
								f++;
								n[k] = 4;
								k += d;
							}
						}
					} else {
						while (k != o) {
							f++;
							n[k] = 8;
							k += d;
						}
					}
				}
			} else {
				f--;

				if (v == 4) {
					g++;
					r = d - 1;
					k -= r;

					while (
						n[k] < 5 &&
						f != h &&
						g != i
					) {
						f--;
						g++;
						l++;
						n[k] += 8;
						k -= r;
					}

					v = 0;

					if (*a >= l) {
						if (n[k] < 5) {
							l++;
							n[k] += 8;
							s = k;

							if (f == h) {
								g++;
								k++;

								while (
									n[k] < 5 &&
									g != i
								) {
									g++;
									l++;
									n[k] += 8;
									k++;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									g--;
									k--;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												g--;
												n[k] -= 8;
												k--;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												g--;
												n[k] = 4;
												k--;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											g--;
											n[k] = 8;
											k--;
										}

										n[k] = 8;
									}
								} else {
									g--;
									k--;

									while (k != s) {
										g--;
										n[k] -= 8;
										k--;
									}

									n[k] -= 8;
								}
							} else {
								f--;
								k -= d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f--;
									l++;
									n[k] += 8;
									k -= d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									f++;
									k += d;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												f++;
												n[k] -= 8;
												k += d;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												f++;
												n[k] = 4;
												k += d;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											f++;
											n[k] = 8;
											k += d;
										}

										n[k] = 8;
									}
								} else {
									f++;
									k += d;

									while (k != s) {
										f++;
										n[k] -= 8;
										k += d;
									}

									n[k] -= 8;
								}
							}
						} else {
							if (j != k) {
								if (
									f == h &&
									g == i
								) {
									h = c;
									i = d;
									m++;
									t = e;
									u = n[k];
									n[k] = 6;

									while (t != 0) {
										t--;

										if (i == 0) {
											h--;
											i = d;
										}

										i--;

										if (
											(n[t] & 3) == 1 &&
											(
												f != h ||
												g != i
											)
										) {
											q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

											if (q != 0) {
												p = q;
											}
										}
									}

									if (p == 0) {
										n[k] = u;
									} else {
										n[k] = 9;
									}
								}
							} else {
								if (
									*a != l ||
									*b > m
								) {
									p = l;
									v = 1;
								}
							}
						}
					}

					f++;
					g--;
					k += r;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								f++;
								g--;
								n[k] -= 8;
								k += r;
							}
						} else {
							while (k != o) {
								f++;
								g--;
								n[k] = 4;
								k += r;
							}
						}
					} else {
						while (k != o) {
							f++;
							g--;
							n[k] = 8;
							k += r;
						}
					}
				} else {
					g--;
					r = d + 1;
					k -= r;

					while (
						n[k] < 5 &&
						f != h &&
						g != i
					) {
						f--;
						g--;
						l++;
						n[k] += 8;
						k -= r;
					}

					v = 0;

					if (*a >= l) {
						if (n[k] < 5) {
							l++;
							n[k] += 8;
							s = k;

							if (f == h) {
								g--;
								k--;

								while (
									n[k] < 5 &&
									g != i
								) {
									g--;
									l++;
									n[k] += 8;
									k--;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									g++;
									k++;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												g++;
												n[k] -= 8;
												k++;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												g++;
												n[k] = 4;
												k++;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											g++;
											n[k] = 8;
											k++;
										}

										n[k] = 8;
									}
								} else {
									g++;
									k++;

									while (k != s) {
										g++;
										n[k] -= 8;
										k++;
									}

									n[k] -= 8;
								}
							} else {
								f--;
								k -= d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f--;
									l++;
									n[k] += 8;
									k -= d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									f++;
									k += d;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												f++;
												n[k] -= 8;
												k += d;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												f++;
												n[k] = 4;
												k += d;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											f++;
											n[k] = 8;
											k += d;
										}

										n[k] = 8;
									}
								} else {
									f++;
									k += d;

									while (k != s) {
										f++;
										n[k] -= 8;
										k += d;
									}

									n[k] -= 8;
								}
							}
						} else {
							if (j != k) {
								if (
									f == h &&
									g == i
								) {
									h = c;
									i = d;
									m++;
									t = e;
									u = n[k];
									n[k] = 6;

									while (t != 0) {
										t--;

										if (i == 0) {
											h--;
											i = d;
										}

										i--;

										if (
											(n[t] & 3) == 1 &&
											(
												f != h ||
												g != i
											)
										) {
											q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

											if (q != 0) {
												p = q;
											}
										}
									}

									if (p == 0) {
										n[k] = u;
									} else {
										n[k] = 9;
									}
								}
							} else {
								if (
									*a != l ||
									*b > m
								) {
									p = l;
									v = 1;
								}
							}
						}
					}

					f++;
					g++;
					k += r;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								f++;
								g++;
								n[k] -= 8;
								k += r;
							}
						} else {
							while (k != o) {
								f++;
								g++;
								n[k] = 4;
								k += r;
							}
						}
					} else {
						while (k != o) {
							f++;
							g++;
							n[k] = 8;
							k += r;
						}
					}
				}
			}
		} else {
			if (
				v == 6 ||
				v == 9
			) {
				if (v == 6) {
					g++;
					k++;

					while (
						n[k] < 5 &&
						g != i
					) {
						g++;
						l++;
						n[k] += 8;
						k++;
					}

					v = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								t = e;
								u = n[k];
								n[k] = 6;

								while (t != 0) {
									t--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[t] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = u;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b > m
							) {
								p = l;
								v = 1;
							}
						}
					}

					g--;
					k--;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								g--;
								n[k] -= 8;
								k--;
							}
						} else {
							while (k != o) {
								g--;
								n[k] = 4;
								k--;
							}
						}
					} else {
						while (k != o) {
							g--;
							n[k] = 8;
							k--;
						}
					}
				} else {
					f++;
					k += d;

					while (
						n[k] < 5 &&
						f != h
					) {
						f++;
						l++;
						n[k] += 8;
						k += d;
					}

					v = 0;

					if (*a >= l) {
						if (j != k) {
							if (
								f == h &&
								g == i
							) {
								h = c;
								i = d;
								t = e;
								u = n[k];
								n[k] = 6;

								while (t != 0) {
									t--;

									if (i == 0) {
										h--;
										i = d;
									}

									i--;

									if (
										(n[t] & 3) == 1 &&
										(
											f != h ||
											g != i
										)
									) {
										q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

										if (q != 0) {
											p = q;
										}
									}
								}

								if (p == 0) {
									n[k] = u;
								} else {
									n[k] = 9;
								}
							}
						} else {
							if (
								*a != l ||
								*b > m
							) {
								p = l;
								v = 1;
							}
						}
					}

					f--;
					k -= d;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								f--;
								n[k] -= 8;
								k -= d;
							}
						} else {
							while (k != o) {
								f--;
								n[k] = 4;
								k -= d;
							}
						}
					} else {
						while (k != o) {
							f--;
							n[k] = 8;
							k -= d;
						}
					}
				}
			} else {
				f++;

				if (v == 1) {
					g--;
					r = d - 1;
					k += r;

					while (
						n[k] < 5 &&
						f != h &&
						g != i
					) {
						f++;
						g--;
						l++;
						n[k] += 8;
						k += r;
					}

					v = 0;

					if (*a >= l) {
						if (n[k] < 5) {
							l++;
							n[k] += 8;
							s = k;

							if (f == h) {
								g--;
								k--;

								while (
									n[k] < 5 &&
									g != i
								) {
									g--;
									l++;
									n[k] += 8;
									k--;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									g++;
									k++;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												g++;
												n[k] -= 8;
												k++;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												g++;
												n[k] = 4;
												k++;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											g++;
											n[k] = 8;
											k++;
										}

										n[k] = 8;
									}
								} else {
									g++;
									k++;

									while (k != s) {
										g++;
										n[k] -= 8;
										k++;
									}

									n[k] -= 8;
								}
							} else {
								f++;
								k += d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f++;
									l++;
									n[k] += 8;
									k += d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									f--;
									k -= d;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												f--;
												n[k] -= 8;
												k -= d;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												f--;
												n[k] = 4;
												k -= d;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											f--;
											n[k] = 8;
											k -= d;
										}

										n[k] = 8;
									}
								} else {
									f--;
									k -= d;

									while (k != s) {
										f--;
										n[k] -= 8;
										k -= d;
									}

									n[k] -= 8;
								}
							}
						} else {
							if (j != k) {
								if (
									f == h &&
									g == i
								) {
									h = c;
									i = d;
									m++;
									t = e;
									u = n[k];
									n[k] = 6;

									while (t != 0) {
										t--;

										if (i == 0) {
											h--;
											i = d;
										}

										i--;

										if (
											(n[t] & 3) == 1 &&
											(
												f != h ||
												g != i
											)
										) {
											q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

											if (q != 0) {
												p = q;
											}
										}
									}

									if (p == 0) {
										n[k] = u;
									} else {
										n[k] = 9;
									}
								}
							} else {
								if (
									*a != l ||
									*b > m
								) {
									p = l;
									v = 1;
								}
							}
						}
					}

					f--;
					g++;
					k -= r;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								f--;
								g++;
								n[k] -= 8;
								k -= r;
							}
						} else {
							while (k != o) {
								f--;
								g++;
								n[k] = 4;
								k -= r;
							}
						}
					} else {
						while (k != o) {
							f--;
							g++;
							n[k] = 8;
							k -= r;
						}
					}
				} else {
					g++;
					r = d + 1;
					k += r;

					while (
						n[k] < 5 &&
						f != h &&
						g != i
					) {
						f++;
						g++;
						l++;
						n[k] += 8;
						k += r;
					}

					v = 0;

					if (*a >= l) {
						if (n[k] < 5) {
							l++;
							n[k] += 8;
							s = k;

							if (f == h) {
								g++;
								k++;

								while (
									n[k] < 5 &&
									g != i
								) {
									g++;
									l++;
									n[k] += 8;
									k++;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									g--;
									k--;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												g--;
												n[k] -= 8;
												k--;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												g--;
												n[k] = 4;
												k--;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											g--;
											n[k] = 8;
											k--;
										}

										n[k] = 8;
									}
								} else {
									g--;
									k--;

									while (k != s) {
										g--;
										n[k] -= 8;
										k--;
									}

									n[k] -= 8;
								}
							} else {
								f++;
								k += d;

								while (
									n[k] < 5 &&
									f != h
								) {
									f++;
									l++;
									n[k] += 8;
									k += d;
								}

								if (
									*a >= l &&
									f == h &&
									g == i
								) {
									if (j != k) {
										h = c;
										i = d;
										m++;
										t = e;
										u = n[k];
										n[k] = 6;

										while (t != 0) {
											t--;

											if (i == 0) {
												h--;
												i = d;
											}

											i--;

											if (
												(n[t] & 3) == 1 &&
												(
													f != h ||
													g != i
												)
											) {
												q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

												if (q != 0) {
													p = q;
												}
											}
										}

										if (p == 0) {
											n[k] = u;
										} else {
											n[k] = 9;
										}
									} else {
										if (
											*a != l ||
											*b > m
										) {
											p = l;
											v = 1;
										}
									}

									f--;
									k -= d;

									if (v == 0) {
										if (p == 0) {
											while (k != s) {
												f--;
												n[k] -= 8;
												k -= d;
											}

											n[k] -= 8;
										} else {
											while (k != s) {
												f--;
												n[k] = 4;
												k -= d;
											}

											n[k] = 4;
										}
									} else {
										while (k != s) {
											f--;
											n[k] = 8;
											k -= d;
										}

										n[k] = 8;
									}
								} else {
									f--;
									k -= d;

									while (k != s) {
										f--;
										n[k] -= 8;
										k -= d;
									}

									n[k] -= 8;
								}
							}
						} else {
							if (j != k) {
								if (
									f == h &&
									g == i
								) {
									h = c;
									i = d;
									m++;
									t = e;
									u = n[k];
									n[k] = 6;

									while (t != 0) {
										t--;

										if (i == 0) {
											h--;
											i = d;
										}

										i--;

										if (
											(n[t] & 3) == 1 &&
											(
												f != h ||
												g != i
											)
										) {
											q = C(a, b, c, d, e, f, g, h, i, j, k, l, m, n);

											if (q != 0) {
												p = q;
											}
										}
									}

									if (p == 0) {
										n[k] = u;
									} else {
										n[k] = 9;
									}
								}
							} else {
								if (
									*a != l ||
									*b > m
								) {
									p = l;
									v = 1;
								}
							}
						}
					}

					f--;
					g--;
					k -= r;

					if (v == 0) {
						if (p == 0) {
							while (k != o) {
								f--;
								g--;
								n[k] -= 8;
								k -= r;
							}
						} else {
							while (k != o) {
								f--;
								g--;
								n[k] = 4;
								k -= r;
							}
						}
					} else {
						while (k != o) {
							f--;
							g--;
							n[k] = 8;
							k -= r;
						}
					}
				}
			}
		}

		if (v == 1) {
			*a = p;
			*b = m;

			while (e != 0) {
				e--;

				if (n[e] != 0) {
					if ((n[e] & 9) != 1) {
						n[e] -= 4;
					}
				}
			}
		}

		return p;
	}
}

namespace pathfinder {
	unsigned long B(unsigned long a, unsigned long b, unsigned char * c) {
		unsigned long * d;
		unsigned long * e;
		unsigned long f = a * b;
		unsigned long g = f;
		unsigned long h;
		unsigned long i;
		unsigned long j;
		unsigned long k;
		unsigned long l;
		unsigned long m;
		unsigned long n;
		unsigned long o;
		unsigned char p = 0;

		while (f != 0) {
			f--;

			if (c[f] != 0) {
				if (c[f] == 7) {
					h = f / b;
					i = f % b;
					j = f;
					k = f;
					l = f;
					m = f;

					if (a != h) {
						j += b;
					}

					if (b != i) {
						k++;
					}

					if (h != 0) {
						l -= b;
					}

					if (i != 0) {
						m--;
					}

					if (
						(
							c[j] != 7 ||
							c[l] != 7
						) &&
						(
							c[k] != 7 ||
							c[m] != 7
						)
					) {
						if (c[j] != 7) {
							if (c[j] == 2) {
								n = j;
							} else {
								if (c[j] == 1) {
									o = j;
								}
							}

							c[j] = 5;
						}

						if (c[k] != 7) {
							if (c[k] == 2) {
								n = k;
							} else {
								if (c[k] == 1) {
									o = k;
								}
							}

							c[k] = 5;
						}

						if (c[l] != 7) {
							if (c[l] == 2) {
								n = l;
							} else {
								if (c[l] == 1) {
									o = l;
								}
							}

							c[l] = 5;
						}

						if (c[m] != 7) {
							if (c[m] == 2) {
								n = m;
							} else {
								if (c[m] == 1) {
									o = m;
								}
							}

							c[m] = 5;
						}
					}
				} else {
					if (c[f] == 2) {
						n = f;
					} else {
						if (c[f] == 1) {
							o = f;
						}
					}

					c[f] = 5;
				}
			}
		}

		a--;
		f = g;
		h = g;
		d = &f;
		e = &h;
		i = o / b;
		j = o % b;
		k = g;
		l = a;
		m = b;

		while (k != 0) {
			k--;

			if (m == 0) {
				l--;
				m = b;
			}

			m--;

			if (
				(c[k] & 3) == 1 &&
				k != o &&
				D(d, e, a, b, g, i, j, l, m, n, o, 0, 0, c) != 0
			) {
				p = 1;
			}
		}

		a = p != 0;
		b = g;

		while (b != 0) {
			b--;

			if ((c[b] & 3) == 1) {
				c[b] -= 5;
			}

			if (c[b] == 4) {
				a++;
			}
		}

		c[o] = 1;
		c[n] = 2;
		return a;
	}

	unsigned long A(unsigned long a, unsigned long b, unsigned char * c) {
		unsigned long * d;
		unsigned long * e;
		unsigned long f = a * b;
		unsigned long g = f;
		unsigned long h;
		unsigned long i;
		unsigned long j;
		unsigned long k;
		unsigned long l;
		unsigned long m;
		unsigned long n;
		unsigned long o;
		unsigned char p = 0;

		while (f != 0) {
			f--;

			if (c[f] != 0) {
				if (c[f] == 7) {
					h = f / b;
					i = f % b;
					j = f;
					k = f;
					l = f;
					m = f;

					if (a != h) {
						j += b;
					}

					if (b != i) {
						k++;
					}

					if (h != 0) {
						l -= b;
					}

					if (i != 0) {
						m--;
					}

					if (
						(
							c[j] != 7 ||
							c[l] != 7
						) &&
						(
							c[k] != 7 ||
							c[m] != 7
						)
					) {
						if (c[j] != 7) {
							if (c[j] == 2) {
								n = j;
							} else {
								if (c[j] == 1) {
									o = j;
								}
							}

							c[j] = 5;
						}

						if (c[k] != 7) {
							if (c[k] == 2) {
								n = k;
							} else {
								if (c[k] == 1) {
									o = k;
								}
							}

							c[k] = 5;
						}

						if (c[l] != 7) {
							if (c[l] == 2) {
								n = l;
							} else {
								if (c[l] == 1) {
									o = l;
								}
							}

							c[l] = 5;
						}

						if (c[m] != 7) {
							if (c[m] == 2) {
								n = m;
							} else {
								if (c[m] == 1) {
									o = m;
								}
							}

							c[m] = 5;
						}
					}
				} else {
					if (c[f] == 2) {
						n = f;
					} else {
						if (c[f] == 1) {
							o = f;
						}
					}

					c[f] = 5;
				}
			}
		}

		a--;
		f = g;
		h = g;
		d = &f;
		e = &h;
		i = o / b;
		j = o % b;
		k = g;
		l = a;
		m = b;

		while (k != 0) {
			k--;

			if (m == 0) {
				l--;
				m = b;
			}

			m--;

			if (
				(c[k] & 3) == 1 &&
				k != o &&
				C(d, e, a, b, g, i, j, l, m, n, o, 0, 0, c) != 0
			) {
				p = 1;
			}
		}

		a = p != 0;
		b = g;

		while (b != 0) {
			b--;

			if ((c[b] & 3) == 1) {
				c[b] -= 5;
			}

			if (c[b] == 4) {
				a++;
			}
		}

		c[o] = 1;
		c[n] = 2;
		return a;
	}
}
