
int FUN_1002f4e20(long param_1,uint param_2,char param_3,short param_4,ushort param_5,
                 undefined1 *param_6,int *param_7,long param_8)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_58;
  char local_57;
  short local_56;
  ushort local_54;
  undefined2 local_52;
  undefined1 *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  if (((param_2 == 0x80) && (param_3 == '\b')) && (param_4 == 0)) {
    if (*param_7 == 0) {
      return 0;
    }
    plVar3 = *(long **)(param_1 + 0x28);
    uVar1 = 0;
    if (plVar3 == (long *)0x0) goto LAB_1002f4fc1;
    local_34 = 0;
    iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,&local_34);
    if (iVar2 == 0) {
      uVar1 = (undefined1)local_34;
      goto LAB_1002f4fc1;
    }
  }
  else {
    local_58 = (undefined1)param_2;
    if (((param_2 & 0xff) != 0x81) || (param_3 != '\n')) {
      lVar4 = 0;
      if (*(long *)(param_1 + 0x830) != 0) {
        lVar4 = param_8;
      }
      local_52 = (undefined2)*param_7;
      local_48 = 0;
      local_44 = 4000;
      local_40 = 0x1004;
      if (param_8 == 0) {
        lVar4 = param_8;
      }
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 == (long *)0x0) {
        return -1;
      }
      local_57 = param_3;
      local_56 = param_4;
      local_54 = param_5;
      local_50 = param_6;
      if (lVar4 == 0) {
        iVar2 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_58);
      }
      else {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"AsyncRequest(%p)",lVar4);
          plVar3 = *(long **)(param_1 + 0x28);
        }
        iVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3,&local_58,FUN_1002f5830,lVar4);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = -1;
      if (lVar4 == 0) {
        iVar2 = local_48;
      }
      *param_7 = iVar2;
      return 0;
    }
    if (*param_7 == 0) {
      return 0;
    }
    plVar3 = *(long **)(param_1 + 0x30 + (ulong)param_5 * 8);
    uVar1 = 0;
    if ((plVar3 == (long *)0x0) ||
       (iVar2 = (**(code **)(*plVar3 + 0x90))(plVar3,&local_34), uVar1 = (undefined1)local_34,
       iVar2 == 0)) goto LAB_1002f4fc1;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  uVar1 = 0;
LAB_1002f4fc1:
  *param_6 = uVar1;
  *param_7 = 1;
  return 0;
}

