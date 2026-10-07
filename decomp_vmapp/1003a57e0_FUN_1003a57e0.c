
undefined8 FUN_1003a57e0(long param_1,uint param_2,uint *param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_3[8] == 0) {
    if (param_3[2] == 0) {
      uVar5 = *param_3;
      uVar8 = uVar5 >> 0x18;
      uVar4 = uVar8 | 0xfffffff0;
      if ((uVar8 & 8) == 0) {
        uVar4 = uVar8 & 0xf;
      }
      if (((uVar5 & 0xf0000) == 0xf0000) && (uVar4 == 0 && (uVar5 & 0x100000) == 0))
      goto LAB_1003a5877;
    }
    puVar7 = *(undefined1 **)(param_3 + 10);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0xe);
    }
    *puVar7 = 0;
    param_3[8] = 0;
    FUN_10038e8e0(param_3 + 8,"dst");
    param_3[2] = 0;
  }
LAB_1003a5877:
  if ((*(byte *)(param_4 + 3) & 0xf) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_10038e8e0(uVar2,"src0");
    FUN_10038e8e0(uVar2," = ");
    FUN_1003a2100(param_4,uVar2);
    FUN_10038e8e0(uVar2,";\n");
    puVar7 = *(undefined1 **)(param_4 + 0x98);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_4 + 0xa8);
    }
    *puVar7 = 0;
    *(undefined4 *)(param_4 + 0x90) = 0;
    FUN_10038e8e0((undefined4 *)(param_4 + 0x90),"src0");
  }
  uVar5 = (param_2 & 0xffff) - 0x14;
  if (uVar5 < 5) {
    puVar3 = (&PTR_s__100bbd980)[(int)uVar5];
    iVar1 = *(int *)(&DAT_100b3f3b0 + (long)(int)uVar5 * 4);
    lVar11 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 8);
      if (param_3[8] == 0) {
        puVar7 = *(undefined1 **)(param_3 + 0x34);
        if (*(undefined1 **)(param_3 + 0x34) == (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(param_3 + 0x38);
        }
        *puVar7 = 0;
        param_3[0x32] = 0;
        FUN_1003a18f0(*(undefined8 *)(param_3 + 0x20),param_3 + 0x32,*param_3,param_3[1]);
        FUN_10039ed40(param_3 + 0x32,*param_3,"xyzw");
        lVar10 = *(long *)(param_3 + 0x34);
        if (*(long *)(param_3 + 0x34) == 0) {
          lVar10 = *(long *)(param_3 + 0x38);
        }
      }
      else {
        lVar10 = *(long *)(param_3 + 10);
        if (*(long *)(param_3 + 10) == 0) {
          lVar10 = *(long *)(param_3 + 0xe);
        }
      }
      if (*(int *)(param_4 + 0x90) == 0) {
        FUN_1003a2100(param_4,(int *)(param_4 + 0x90));
      }
      lVar9 = *(long *)(param_4 + 0x98);
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_4 + 0xa8);
      }
      if (*(int *)(param_4 + 0x148) == 0) {
        FUN_1003a2100(param_4 + 0xb8,(int *)(param_4 + 0x148));
      }
      lVar6 = *(long *)(param_4 + 0x150);
      if (lVar6 == 0) {
        lVar6 = *(long *)(param_4 + 0x160);
      }
      FUN_10038e8e0(uVar2,"%s.%c = dot(%s%s, %s%s);\n",lVar10,(int)"xyzw"[lVar11],lVar9,puVar3,lVar6
                    ,puVar3);
      *(int *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + 1;
      puVar7 = *(undefined1 **)(param_4 + 0x150);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(param_4 + 0x160);
      }
      *puVar7 = 0;
      *(undefined4 *)(param_4 + 0x148) = 0;
      lVar11 = lVar11 + 1;
    } while (iVar1 != (int)lVar11);
  }
  return 0;
}

