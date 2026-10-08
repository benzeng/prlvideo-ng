
ulong FUN_1000333e0(undefined8 param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = _CGWindowLevelForKey(4);
  if ((param_2 == 2) || (param_2 == 5)) {
    iVar1 = _CGWindowLevelForKey(7);
    uVar2 = (ulong)(iVar1 + 2);
  }
  return uVar2;
}

