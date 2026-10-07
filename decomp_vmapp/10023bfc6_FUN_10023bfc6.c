
/* WARNING: Removing unreachable block (ram,0x00010023c01f) */
/* WARNING: Removing unreachable block (ram,0x00010023c02e) */

void FUN_10023bfc6(undefined8 param_1,char *param_2,int *param_3,long param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s missing context\n",param_2);
  }
  else if (param_3 == (int *)0x0) {
    if (((*param_2 != '#') &&
        (_fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s missing define\n",param_2),
        param_4 != 0)) && (*(int *)(param_4 + 0x44) == 0)) {
      *(undefined4 *)(param_4 + 0x44) = 0x25;
    }
  }
  else if ((param_4 == 0) || (param_3 == (int *)0x0)) {
    _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s missing info\n",param_2);
    if ((param_4 != 0) && (*(int *)(param_4 + 0x44) == 0)) {
      *(undefined4 *)(param_4 + 0x44) = 0x25;
    }
  }
  else if (*param_3 == 4) {
    iVar1 = FUN_1002418f5(param_4,param_3);
    if (iVar1 != 0) {
      *(int *)(param_4 + 0xb8) = iVar1;
    }
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100ba2328,"callback on %s define is not element\n",param_2);
    if (*(int *)(param_4 + 0x44) == 0) {
      *(undefined4 *)(param_4 + 0x44) = 0x25;
    }
  }
  return;
}

