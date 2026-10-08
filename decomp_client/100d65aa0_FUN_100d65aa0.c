
undefined8
FUN_100d65aa0(long param_1,undefined8 param_2,undefined4 param_3,int param_4,int *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar1 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar5 = (uint *)*puVar1;
      if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
        QByteArray::reallocData(puVar1,puVar5[1] + 1,puVar5[2] >> 0x1f);
        puVar5 = (uint *)*puVar1;
      }
      lVar4 = *(long *)(puVar5 + 4);
      if ((long)puVar5 + lVar4 != 0) {
        lVar2 = (ulong)(param_4 + 0x1004) + lVar4;
        if (*(short *)((long)puVar5 + lVar2) != 0x696c) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.84:");
          return 0x815800a;
        }
        if (*(short *)((long)puVar5 + lVar2 + 2) == 0x3f4) {
          uVar3 = FUN_100d69e90(*(undefined8 *)(param_1 + 8),8,param_5);
          if ((int)uVar3 != 0x8000000) {
            return uVar3;
          }
          lVar4 = (ulong)(*param_5 + 4) + lVar4;
          *(undefined2 *)((long)puVar5 + lVar4) = 0x6972;
          *(undefined2 *)((long)puVar5 + lVar4 + 2) = 1;
          *(int *)((long)puVar5 + lVar4 + 4) = param_4;
          uVar3 = FUN_100d64de0(param_1,param_2,param_3,*param_5 + -0x1000,param_5);
          return uVar3;
        }
        FUN_100df99c0("","WinRegistry",0,"OA00002.85:");
        return 0x815801b;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.83:");
  return 0x8158002;
}

