
undefined8
FUN_100d65c60(long param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  if (param_4 + 1U < 2) {
    uVar3 = FUN_100d63af0(param_1,param_2,param_3,param_5);
    return uVar3;
  }
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar4 = (uint *)*puVar2;
      if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
        QByteArray::reallocData(puVar2,puVar4[1] + 1,puVar4[2] >> 0x1f);
        puVar4 = (uint *)*puVar2;
      }
      if ((long)puVar4 + *(long *)(puVar4 + 4) != 0) {
        uVar1 = *(ushort *)((long)puVar4 + *(long *)(puVar4 + 4) + (ulong)(param_4 + 0x1004));
        if (uVar1 < 0x696c) {
          if ((uVar1 == 0x666c) || (uVar1 == 0x686c)) {
            uVar3 = FUN_100d63dc0(param_1,param_2,param_3,param_4);
            if ((int)uVar3 != 0x815800c) {
              return uVar3;
            }
            FUN_100df99c0("","WinRegistry",0,"OA00002.24:");
            uVar3 = FUN_100d65710(param_1,param_2,param_3,param_4,param_5);
            return uVar3;
          }
        }
        else {
          if (uVar1 == 0x696c) {
            uVar3 = FUN_100d64300(param_1,param_2,param_3,param_4);
            if ((int)uVar3 != 0x815800c) {
              return uVar3;
            }
            FUN_100df99c0("","WinRegistry",0,"OA00002.25:");
            uVar3 = FUN_100d65aa0(param_1,param_2,param_3,param_4,param_5);
            return uVar3;
          }
          if (uVar1 == 0x6972) {
            uVar3 = FUN_100d64de0(param_1,param_2,param_3,param_4);
            return uVar3;
          }
        }
        FUN_100df99c0("","WinRegistry",0,"OA00002.26:");
        return 0x815800a;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.23:");
  return 0x8158002;
}

