
undefined8 FUN_10084f680(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (*param_2 == '-') {
    pcVar3 = param_2 + 1;
  }
  if ((*pcVar3 == '0') && ((byte)(pcVar3[1] | 0x20U) == 0x78)) {
    iVar1 = FUN_10084f1e0(param_1,pcVar3 + 2);
  }
  else {
    iVar1 = FUN_10084f470(param_1);
  }
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 1, *param_2 == '-')) {
    *(undefined4 *)(*param_1 + 0x10) = 1;
  }
  return uVar2;
}

