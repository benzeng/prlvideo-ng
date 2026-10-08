
undefined8 FUN_100d6a060(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00003.09:");
    uVar3 = 0x8158002;
  }
  else {
    puVar4 = (uint *)*puVar2;
    if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
      QByteArray::reallocData(puVar2,puVar4[1] + 1,puVar4[2] >> 0x1f);
      puVar4 = (uint *)*puVar2;
    }
    lVar5 = (ulong)param_2 + *(long *)(puVar4 + 4);
    iVar1 = *(int *)((long)puVar4 + lVar5);
    if ((long)iVar1 < 0) {
      lVar6 = -(long)iVar1;
      ___bzero((undefined4 *)((long)puVar4 + lVar5),lVar6);
      *(undefined4 *)((long)puVar4 + lVar5) = (int)lVar6;
      *(undefined4 *)((long)puVar4 + lVar5 + 4) = 0xffffffff;
      uVar3 = 0x8000000;
    }
    else {
      FUN_100df99c0("","WinRegistry",0,"OA00003.10:\t%x;\t%x",param_2,iVar1);
      uVar3 = 0x8158007;
    }
  }
  return uVar3;
}

