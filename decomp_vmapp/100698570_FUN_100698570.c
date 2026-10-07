
undefined8 FUN_100698570(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  undefined **local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  long *local_38;
  
  local_58 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(uint *)(param_2 + 0x28);
  local_60 = &PTR_FUN_100bcbdd0;
  local_4c = 4;
  local_48 = local_50 >> 2;
  local_40 = 0;
  local_38 = param_1;
  if ((local_50 & 3) != 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 == (m_SizeBytes % m_SizeOfEntry)","StructuredBase.cpp",0x5e,"CBatChunk");
  }
  uVar4 = *(uint *)(param_2 + 0x48);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_2 + 0x40) + 8 + (ulong)uVar7 * 0x10);
      if (((iVar1 == -1) || (iVar1 == *(int *)(param_2 + 0x3c))) &&
         (uVar5 = (ulong)*(uint *)(param_2 + 0x30),
         *(uint *)(param_2 + 0x30) < *(uint *)(param_2 + 0x34))) {
        uVar3 = (ulong)*(uint *)(param_2 + 0x2c) / (ulong)*(uint *)(param_1[4] + 8);
        piVar6 = (int *)(*(long *)(*(long *)(param_2 + 0x40) + (ulong)uVar7 * 0x10) + 0xc +
                        uVar5 * 0x20);
        do {
          if (*piVar6 != *(int *)(param_2 + 0x38)) {
            FUN_1008e3970("","dimg",0,
                          "Error: invalid table offsets, block %u is occupied by storage %u, but should be %u"
                          ,uVar5,*piVar6,*(int *)(param_2 + 0x38));
            FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","0","StructuredBase.cpp",
                          0x104,"DoFillTable");
            return 0x80021025;
          }
          if ((piVar6[-1] < *(int *)(param_2 + 0x3c)) &&
             (lVar2 = (**(code **)(*param_1 + 0x140))(param_1,&local_60,uVar3), lVar2 != 0)) {
            piVar6[-1] = *(int *)(param_2 + 0x3c);
            *(long *)(piVar6 + -3) = lVar2;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar4;
          uVar3 = (ulong)((int)uVar3 + 1);
          piVar6 = piVar6 + 8;
        } while (uVar4 < *(uint *)(param_2 + 0x34));
        uVar4 = *(uint *)(param_2 + 0x48);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return 0;
}

