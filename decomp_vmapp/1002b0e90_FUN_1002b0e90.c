
void FUN_1002b0e90(long param_1,ulong param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = 0xff000000;
  local_34 = param_5;
  (*DAT_1011c6ee0)(*(undefined4 *)(param_1 + 0x11880));
  iVar1 = param_3 * 4 + 0x24;
  do {
    uVar3 = param_2 & 0xffffffff;
    uVar2 = (uint)param_2;
    param_2 = uVar3 / 10;
    uVar4 = uVar2 + (int)(uVar3 / 10) * -10;
    (*DAT_1011c7180)((float)iVar1,(float)(param_4 * 6 + 6),0,DAT_100b37990,2);
    (*DAT_1011c71d0)(1,&local_38);
    (*DAT_1011c5be8)(4,(uint)DAT_101116286 * 6,(uint)DAT_10111627a * 6);
    (*DAT_1011c71d0)(1,&local_34);
    (*DAT_1011c5be8)(4,(uint)(byte)(&DAT_10111627c)[uVar4] * 6,
                     (uint)(byte)(&DAT_101116270)[uVar4] * 6);
    iVar1 = iVar1 + -4;
  } while (9 < uVar2);
  return;
}

