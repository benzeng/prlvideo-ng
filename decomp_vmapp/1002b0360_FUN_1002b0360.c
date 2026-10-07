
void FUN_1002b0360(long param_1,ulong param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7,uint param_8)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar6 = (param_2 & 0xffffffff) * 0x8f0;
  plVar1 = (long *)(*(long *)(param_1 + 0x9e8 + lVar6) + 0xf0);
  *plVar1 = *plVar1 + 1;
  piVar2 = (int *)(param_1 + 0x9d0 + lVar6);
  if (*(int *)(param_1 + 0x9d0 + lVar6) != param_3) {
    if ((param_4 != 0xde1) || ((param_8 & 0x10) == 0)) {
      iVar3 = *(int *)(param_1 + 0x9d4 + lVar6);
      *piVar2 = iVar3;
      lVar4 = DAT_1011c4a88;
      if ((iVar3 != 0) && (iVar3 != param_3)) {
        lVar5 = *(long *)(param_1 + 0x9b8 + lVar6);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_1 + 0x868);
        }
        if (DAT_1011c4a88 != lVar5) {
          DAT_1011c4a88 = lVar5;
          _CGLSetCurrentContext();
        }
        local_40 = 0;
        local_3c = *(undefined4 *)(param_1 + 0x93c + lVar6);
        local_38 = *(undefined4 *)(param_1 + 0x938 + lVar6);
        local_34 = 0;
        (*DAT_1011c5738)(0x8ca9,*(undefined4 *)(param_1 + 0x9d8 + lVar6));
        (*DAT_1011c5c00)(0x8ce0);
        (*DAT_1011c72d0)(0,0,*(undefined4 *)(param_1 + 0x938 + lVar6),
                         *(undefined4 *)(param_1 + 0x93c + lVar6));
        FUN_1002b0580(param_1,param_3,param_4,0x2600,&local_40,0,0,param_5,param_6,param_7,param_8,0
                     );
        (*DAT_1011c5738)(0x8ca9,0);
        (*DAT_1011c5c00)(0x405);
        (*DAT_1011c72d0)(0,0,*(undefined4 *)(param_1 + 0x9ac + lVar6),
                         *(undefined4 *)(param_1 + 0x9b0 + lVar6));
        if (((param_8 & 2) != 0) && (*(char *)(param_1 + 0x870) != '\0')) {
          (*DAT_1011c5d48)();
        }
        if (DAT_1011c4a88 != lVar4) {
          DAT_1011c4a88 = lVar4;
          _CGLSetCurrentContext();
        }
        param_2 = param_2 & 0xffffffff;
        if ((param_8 & 0x10) != 0) {
          *(undefined1 *)(param_1 + 0x968 + lVar6) = 1;
        }
      }
      goto LAB_1002b03c1;
    }
  }
  *piVar2 = param_3;
LAB_1002b03c1:
  if ((param_8 & 2) == 0) {
    return;
  }
  FUN_1002ac290(param_1,param_2,param_8);
  return;
}

