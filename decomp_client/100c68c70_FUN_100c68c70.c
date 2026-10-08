
undefined8 FUN_100c68c70(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  sbyte sVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_32;
  char local_31;
  
  if (param_4 != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4 >> 3;
      local_31 = ((*(byte *)(param_3 + uVar3) >> ((uint)(uVar4 & 7) ^ 7) & 1) != 0) * -0x80;
      lVar1 = *(long *)(param_1 + 0x78);
      FUN_100c06630(&local_31,&local_32,1,1,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x28,
                    *(undefined4 *)(param_1 + 0x10));
      sVar2 = (sbyte)(uVar4 & 7);
      *(byte *)(param_2 + uVar3) =
           (byte)((local_32 & 0x80) >> sVar2) | ~(byte)(0x80 >> sVar2) & *(byte *)(param_2 + uVar3);
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
  }
  return 1;
}

