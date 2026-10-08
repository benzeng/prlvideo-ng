
void FUN_1000d6d60(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  long local_40;
  long local_38;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1 + 0x10);
  if (lVar4 != 0) {
    lVar5 = FUN_1000fccf0(param_1 + 0x118,param_2,param_3);
    if (lVar5 == 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",1,"Invalid shortcut item tag %d",param_3);
        return;
      }
    }
    else if (0 < *(int *)(*(long *)(lVar5 + 0x10) + 4)) {
      plVar7 = (long *)(lVar5 + 0x10);
      lVar5 = 0;
      do {
        FUN_10018c250(&local_38,lVar4);
        lVar2 = local_38;
        puVar6 = (uint *)*plVar7;
        if (1 < *puVar6) {
          if ((puVar6[2] & 0x7fffffff) == 0) {
            puVar6 = (uint *)QArrayData::allocate(4,8,0,2);
            *plVar7 = (long)puVar6;
          }
          else {
            FUN_1000e7fd0(plVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
            puVar6 = (uint *)*plVar7;
          }
        }
        _PrlDevKeyboard_SendKeyEventEx
                  (lVar2,*(undefined4 *)((long)puVar6 + lVar5 * 4 + *(long *)(puVar6 + 4)),0);
        if (local_38 != 0) {
          _PrlHandle_Free();
        }
        lVar5 = lVar5 + 1;
        iVar1 = *(int *)(*plVar7 + 4);
      } while (lVar5 < iVar1);
      if (0 < iVar1) {
        lVar5 = (long)iVar1 + 1;
        do {
          FUN_10018c250(&local_40,lVar4);
          lVar2 = local_40;
          puVar6 = (uint *)*plVar7;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(4,8,0,2);
              *plVar7 = (long)puVar6;
            }
            else {
              FUN_1000e7fd0(plVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*plVar7;
            }
          }
          _PrlDevKeyboard_SendKeyEventEx
                    (lVar2,*(undefined4 *)((long)puVar6 + lVar5 * 4 + *(long *)(puVar6 + 4) + -8),
                     0x80);
          if (local_40 != 0) {
            _PrlHandle_Free();
          }
          lVar5 = lVar5 + -1;
        } while (1 < lVar5);
      }
    }
  }
  return;
}

