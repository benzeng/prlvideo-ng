
undefined8 FUN_100b24100(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  lVar1 = param_1[0x114];
  uVar7 = param_1[0x113];
  lVar2 = *param_1;
  uVar5 = uVar7;
  if (*(int *)(*(long *)(lVar2 + 0x20) + 8) != 4) {
    FUN_100df99c0("Compact","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "sizeof(PRL_UINT32) == image->m_Info->GetElementSizeBytes()","StructuredBase.cpp",
                  0x7ef,"FindBlocksForMoveCb");
    uVar5 = param_1[0x113];
  }
  puVar4 = (undefined4 *)param_1[0x110];
  uVar3 = *(uint *)(param_1 + 0x111);
  if (uVar5 == 0) {
    puVar4 = (undefined4 *)((long)puVar4 + (ulong)*(uint *)((long)param_1 + 0x8ac));
    uVar3 = uVar3 - *(uint *)((long)param_1 + 0x8ac);
  }
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("Compact","dimg",4,"[%p] Scan range [%llu, %llu[",lVar2,uVar5,param_1[0x114]);
  }
  if ((uVar3 & 3) != 0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 == (m_SizeBytes % m_SizeOfEntry)","StructuredBase.cpp",0x5e,"CBatChunk");
  }
  if ((int)lVar1 != (int)uVar7) {
    iVar6 = (int)lVar1 - (int)uVar7;
    do {
      FUN_100b25670(lVar2 + 0x60,uVar7 & 0xffffffff,*puVar4);
      uVar7 = (ulong)((int)uVar7 + 1);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 1;
}

