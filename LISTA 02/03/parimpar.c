#include <stdio.h>
int main(){

    int x, a, b;
    int y, c, d;
    int z, vencedor1, vencedor2;

    scanf("%d %d %d", &x, &a, &b);

    if (x==0){
        if ((a+b)%2==0){
            //a ganha

            scanf("%d %d %d", &y, &c, &d);

                if (y==0){
                    if ((c+d)%2==0){
                        //c ganha

                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }
                } else if (y==1){
                    if ((c+d)%2==0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }
                }

        }else if ((a+b)%2!=0){
            //b ganha

            scanf("%d %d %d", &y, &c, &d);

                if (y==0){
                     if ((c+d)%2==0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }
                } else if (y==1){
                    if ((c+d)%2==0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }
                }

        }
    } else if (x==1){
        if ((a+b)%2==0){
            //b ganha
            scanf("%d %d %d", &y, &c, &d);

                if (y==0){
                     if ((c+d)%2==0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }
                } else if (y==1){
                    if ((c+d)%2==0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("B\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("B\n");
                                    }
                                }
                    }
                }

        }else if ((a+b)%2!=0){
            //a ganha
            scanf("%d %d %d", &y, &c, &d);

                if (y==0){
                     if ((c+d)%2==0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }
                } else if (y==1){
                    if ((c+d)%2==0){
                        //d ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("D\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("D\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }else if ((c+d)%2!=0){
                        //c ganha
                            scanf("%d %d %d", &z, &vencedor1, &vencedor2);

                                if (z==0){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("A\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("C\n");
                                    }
                                }else if (z==1){
                                    if((vencedor1+vencedor2)%2==0){
                                        printf("C\n");
                                    }else if ((vencedor1+vencedor2)%2!=0){
                                        printf("A\n");
                                    }
                                }
                    }
                }

        }
    }
    return 0;

}