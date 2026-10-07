
undefined4 FUN_1006fffb0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 local_1c;
  
  lVar1 = _getgrnam(param_1 + 0x149);
  if (lVar1 == 0) {
    puVar2 = &local_1c;
    _sscanf((char *)(param_1 + 0x94),"%o",puVar2);
  }
  else {
    puVar2 = (undefined4 *)(lVar1 + 0x10);
  }
  return *puVar2;
}

