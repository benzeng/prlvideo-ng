
undefined4 FUN_100b95ad0(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_100b98770(param_2 + 0x290,"keyserver_host");
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x40) == 0)) {
    pcVar2 = _strdup(*(char **)(lVar1 + 0x18));
    *(char **)(param_1 + 0x40) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      return 0xfffffffe;
    }
  }
  uVar3 = 0xfffffff3;
  if ((*(long *)(param_2 + 0x280) != 0) &&
     (lVar1 = FUN_100b98770(param_2 + 0x290,"update_password"), lVar1 != 0)) {
    lVar1 = FUN_100b92d20(param_2 + 0x268,*(undefined8 *)(lVar1 + 0x18));
    *(long *)(*(long *)(param_1 + 0x48) + 0x28) = lVar1;
    uVar3 = 0xfffffffe;
    if (lVar1 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

