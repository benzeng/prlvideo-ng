
void FUN_10078b400(void *param_1,void *param_2,int param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_10078be60(param_1,param_3);
  if ((param_2 == (void *)0x0) || (param_4 == (undefined8 *)0x0)) {
    lVar2 = 0;
    uVar3 = 0;
    if (param_4 == (undefined8 *)0x0) goto LAB_10078b5bd;
    lVar2 = param_4[1];
  }
  else {
    lVar2 = 0;
    if ((param_4[1] != 0) && (lVar2 = param_4[1], param_4[4] != 0)) {
      if (param_3 == 0) {
        return;
      }
      iVar4 = 0;
      do {
        *(int *)((long)param_1 + 0x5b8) = iVar4;
        _memcpy(param_1,param_2,0x5b8);
        FUN_10078b600(param_1,6);
        FUN_10078b600(param_1,1);
        FUN_10078b600(param_1,0);
        FUN_10078b600(param_1,2);
        FUN_10078b600(param_1,3);
        FUN_10078b600(param_1,4);
        FUN_10078b600(param_1,5);
        FUN_10078b600(param_1,7);
        if ((*(byte *)((long)param_1 + 0x233) & 0x80) == 0) {
          *(undefined4 *)((long)param_1 + 0x758) = 4;
          pcVar1 = FUN_10078bf20;
        }
        else if (*(short *)((long)param_1 + 0x220) == 0x40) {
          *(undefined4 *)((long)param_1 + 0x758) = 3;
          pcVar1 = FUN_10078c280;
        }
        else if (*(short *)((long)param_1 + 0x220) == 0x20) {
          if ((*(byte *)((long)param_1 + 0x98) & 0x20) == 0) {
            *(undefined4 *)((long)param_1 + 0x758) = 1;
            pcVar1 = FUN_10078bf40;
          }
          else {
            *(undefined4 *)((long)param_1 + 0x758) = 2;
            pcVar1 = FUN_10078c0a0;
          }
        }
        else {
          *(undefined4 *)((long)param_1 + 0x758) = 0;
          pcVar1 = FUN_10078bf30;
        }
        *(code **)((long)param_1 + 0x760) = pcVar1;
        uVar3 = param_4[1];
        *(undefined8 *)((long)param_1 + 0x740) = *param_4;
        *(undefined8 *)((long)param_1 + 0x748) = uVar3;
        *(undefined8 *)((long)param_1 + 0x750) = param_4[2];
        param_1 = (void *)((long)param_1 + 0x768);
        param_2 = (void *)((long)param_2 + 0x5b8);
        iVar4 = iVar4 + 1;
      } while (param_3 != iVar4);
      return;
    }
  }
  uVar3 = param_4[4];
LAB_10078b5bd:
  FUN_1008e3970("","gueststate",0,"Invalid dbg_ctxts %p or default_mem %p %p %p",param_2,param_4,
                lVar2,uVar3);
  return;
}

