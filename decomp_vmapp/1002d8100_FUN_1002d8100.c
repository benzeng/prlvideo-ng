
void FUN_1002d8100(long param_1,long param_2)

{
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ControlInOut",param_1 + 0xcf);
  }
  if ((((*(byte *)(param_1 + 0x91) & 2) == 0) && (*(int *)(param_2 + 0x450) == 0x69)) &&
     (*(uint *)(param_2 + 0x43c) < (uint)*(ushort *)(param_1 + 0xfd))) {
    *(uint *)(param_2 + 0x43c) = (uint)*(ushort *)(param_1 + 0xfd);
  }
  if (*(uint *)(param_2 + 0x438) < *(uint *)(param_2 + 0x43c)) {
    *(uint *)(param_2 + 0x43c) = *(uint *)(param_2 + 0x438);
  }
  FUN_1002d81f0(param_1,param_2,1);
  return;
}

