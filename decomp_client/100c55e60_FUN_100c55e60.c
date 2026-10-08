
bool FUN_100c55e60(long param_1,long param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char *in_RAX;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_38;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar4 = 0x43;
    uVar5 = 0x124;
  }
  else if ((*(long *)(param_1 + 0x80) == 0) ||
          (local_38 = in_RAX, iVar1 = FUN_100c55920(param_1,0xd,0,param_2,0), iVar1 < 1)) {
    if (param_4 != 0) {
      FUN_100c63270();
      return true;
    }
    uVar4 = 0x89;
    uVar5 = 0x137;
  }
  else {
    uVar2 = FUN_100c55920(param_1,0x12,(long)iVar1,0,0);
    if ((int)uVar2 < 0) {
      FUN_100c62ee0(0x26,0xaa,0x8a,"eng_ctrl.c",0xed);
    }
    else if ((uVar2 & 7) != 0) {
      uVar2 = FUN_100c55920(param_1,0x12,(long)iVar1,0,0);
      if ((int)uVar2 < 0) {
        FUN_100c62ee0(0x26,0xab,0x6e,"eng_ctrl.c",0x146);
        return false;
      }
      if ((uVar2 & 4) == 0) {
        if (param_3 == (char *)0x0) {
          uVar4 = 0x87;
          uVar5 = 0x15f;
        }
        else {
          if ((uVar2 & 2) != 0) {
            lVar3 = 0;
LAB_100c56066:
            iVar1 = FUN_100c55920(param_1,iVar1,lVar3,param_3,0);
            return 0 < iVar1;
          }
          if ((uVar2 & 1) == 0) {
            uVar4 = 0x6e;
            uVar5 = 0x171;
          }
          else {
            lVar3 = _strtol(param_3,&local_38,10);
            if ((local_38 != param_3) && (*local_38 == '\0')) {
              param_3 = (char *)0x0;
              goto LAB_100c56066;
            }
            uVar4 = 0x85;
            uVar5 = 0x177;
          }
        }
      }
      else {
        if (param_3 == (char *)0x0) {
          lVar3 = 0;
          param_3 = (char *)0x0;
          goto LAB_100c56066;
        }
        uVar4 = 0x88;
        uVar5 = 0x14f;
      }
      goto LAB_100c55fcd;
    }
    uVar4 = 0x86;
    uVar5 = 0x13c;
  }
LAB_100c55fcd:
  FUN_100c62ee0(0x26,0xab,uVar4,"eng_ctrl.c",uVar5);
  return false;
}

