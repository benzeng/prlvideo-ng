
ulong FUN_100caad80(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_100c60ae0(*param_1);
  uVar2 = FUN_100c60ae0(param_1[1]);
  return uVar2 ^ lVar1 << 2;
}

