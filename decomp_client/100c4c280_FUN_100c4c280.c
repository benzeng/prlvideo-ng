
long FUN_100c4c280(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  lVar4 = param_2;
  if ((param_2 == 0) && (lVar4 = FUN_100c27a20(), lVar4 == 0)) {
    return 0;
  }
  FUN_100c27c60(lVar4);
  lVar5 = FUN_100c27e20(lVar4);
  if (lVar5 == 0) {
    uVar6 = 0x41;
    uVar7 = 0xcc;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
LAB_100c4c3b2:
      iVar3 = FUN_100c62220();
      if (((iVar3 == 0) && (plVar2 = *(long **)(param_1 + 0x30), plVar2 != (long *)0x0)) &&
         (*plVar2 != 0)) {
        FUN_100c62060(0,*plVar2,*(int *)((long)plVar2 + 0xc) << 3);
      }
      if ((*(byte *)(param_1 + 0x75) & 1) == 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x20);
        local_48 = *puVar11;
        local_40 = *(undefined4 *)(puVar11 + 1);
        local_3c = *(undefined4 *)((long)puVar11 + 0xc);
        local_38 = *(undefined4 *)(puVar11 + 2);
        local_34 = *(uint *)((long)puVar11 + 0x14) & 0xfffffff8 | 6;
        puVar11 = &local_48;
      }
      else {
        puVar11 = *(undefined8 **)(param_1 + 0x20);
      }
      lVar10 = FUN_100c2be50(0,lVar5,puVar11,lVar4,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30)
                             ,*(undefined8 *)(param_1 + 0x78));
      if (lVar10 == 0) {
        FUN_100c62ee0(4,0x88,3,"rsa_crpt.c",0xeb);
        lVar10 = 0;
      }
      else {
        uVar6 = FUN_100c2c290(lVar10);
        FUN_100bf2be0(uVar6);
      }
      goto LAB_100c4c4bb;
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if (((lVar5 != 0) && (lVar10 = *(long *)(param_1 + 0x38), lVar10 != 0)) &&
       (lVar1 = *(long *)(param_1 + 0x40), lVar1 != 0)) {
      FUN_100c27c60(lVar4);
      uVar6 = FUN_100c27e20(lVar4);
      uVar7 = FUN_100c27e20(lVar4);
      lVar8 = FUN_100c27e20(lVar4);
      if (lVar8 != 0) {
        uVar9 = FUN_100c26510();
        iVar3 = FUN_100c23090(uVar7,lVar10,uVar9);
        if (iVar3 != 0) {
          uVar9 = FUN_100c26510();
          iVar3 = FUN_100c23090(lVar8,lVar1,uVar9);
          if ((iVar3 != 0) && (iVar3 = FUN_100c297a0(uVar6,uVar7,lVar8,lVar4), iVar3 != 0)) {
            lVar5 = FUN_100c2cf20(0,lVar5,uVar6,lVar4);
            FUN_100c27d40(lVar4);
            if (lVar5 != 0) goto LAB_100c4c3b2;
            goto LAB_100c4c495;
          }
        }
      }
      FUN_100c27d40(lVar4);
    }
LAB_100c4c495:
    uVar6 = 0x8c;
    uVar7 = 0xd3;
  }
  FUN_100c62ee0(4,0x88,uVar6,"rsa_crpt.c",uVar7);
  lVar5 = 0;
  lVar10 = 0;
LAB_100c4c4bb:
  FUN_100c27d40(lVar4);
  if (param_2 == 0) {
    FUN_100c27ab0(lVar4);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_100c266b0(lVar5);
  }
  return lVar10;
}

