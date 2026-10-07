
undefined8 FUN_100517880(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar5 = 0xf0000003;
  if (*(short *)(param_2 + 0x16) != 0) {
    lVar4 = FUN_1002a6120(param_2,0,1);
    if ((lVar4 != 0) && (7 < *(uint *)(lVar4 + 8))) {
      QMutex::lock();
      lVar4 = *(long *)(param_1 + 0x68);
      uVar5 = 0xf000001c;
      if (*(long *)(lVar4 + 0x28) == 0) {
        if (*(char *)(lVar4 + 0x38) == '\0') {
          if ((*(long *)(lVar4 + 0x30) == 0) ||
             (lVar2 = *(long *)(*(long *)(lVar4 + 0x30) + 0x10), lVar2 == 0)) {
            *(long *)(lVar4 + 0x28) = param_2;
            uVar5 = 0xffffffff;
          }
          else {
            lVar4 = FUN_1002a6120(param_2,0,1);
            if (*(uint *)(lVar4 + 8) < *(uint *)(lVar2 + 4)) {
              FUN_1002a5a50(lVar4,0,(undefined4 *)(lVar2 + 4),4);
              *(undefined4 *)(lVar4 + 0x10) = 4;
              uVar5 = 0xf0000009;
            }
            else {
              uVar5 = 0;
              FUN_1002a5a50(lVar4,0,lVar2);
              *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar2 + 4);
              plVar3 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
              *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = 0;
              if (plVar3 != (long *)0x0) {
                LOCK();
                plVar1 = plVar3 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)(*plVar3 + 0x10))();
                }
              }
            }
          }
        }
        else {
          *(undefined1 *)(lVar4 + 0x38) = 0;
          local_38 = DAT_100b46408;
          local_40 = DAT_100b46400;
          lVar4 = FUN_1002a6120(param_2,0,1);
          if (*(uint *)(lVar4 + 8) < 8) {
            uVar5 = 0xf0000009;
            FUN_1002a5a50(lVar4,0,(long)&local_40 + 4,4);
            uVar6 = 4;
          }
          else {
            uVar5 = 0;
            FUN_1002a5a50(lVar4,0,&local_40,8);
            uVar6 = local_40._4_4_;
          }
          *(undefined4 *)(lVar4 + 0x10) = uVar6;
        }
      }
      QMutex::unlock();
    }
  }
  return uVar5;
}

