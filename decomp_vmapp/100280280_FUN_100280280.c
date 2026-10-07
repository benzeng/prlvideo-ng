
/* WARNING: Removing unreachable block (ram,0x000100280463) */

void FUN_100280280(long *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  
  (**(code **)(*param_1 + 0x48))();
  plVar1 = param_1 + 0x24;
  bVar7 = true;
  while( true ) {
    lVar5 = param_1[0xd];
    if (bVar7) {
      bVar2 = FUN_1002583d0(param_1 + 5);
      bVar2 = bVar2 ^ 1;
    }
    else {
      bVar2 = 0;
    }
    iVar3 = FUN_1002efb70(lVar5,bVar2,0xffffffff);
    if (iVar3 == -0xfffc) break;
    iVar4 = FUN_1002ef640(param_1[0xd]);
    if (iVar4 != 3) {
      QMutex::lock();
      bVar8 = true;
      if (iVar3 == 3) {
        while (lVar5 = FUN_1002584f0(param_1 + 0xe), lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 2) {
            bVar7 = true;
            FUN_1002808d0(plVar1);
          }
          else if ((*(int *)(lVar5 + 0x18) == 0) && (*(code **)(lVar5 + 0x20) != (code *)0x0)) {
            (**(code **)(lVar5 + 0x20))(*(undefined8 *)(lVar5 + 0x28));
          }
          FUN_100258470(param_1 + 0xe,lVar5);
          (**(code **)(*param_1 + 0x50))(param_1);
        }
      }
      else {
        bVar7 = *(int *)(*plVar1 + 0xc) == *(int *)(*plVar1 + 8);
        if (!bVar7) {
          uVar6 = FUN_100041bb0(plVar1);
          QMutex::unlock();
          FUN_100280500(param_1,uVar6);
          bVar8 = ((ulong)(param_1 + 0x23) & 0xfffffffffffffffe) != 0;
          if (bVar8) {
            QMutex::lock();
          }
          bVar7 = *(int *)(*plVar1 + 0xc) == *(int *)(*plVar1 + 8);
        }
        if (bVar7) {
          FUN_1002ef6b0(param_1[0xd]);
        }
        else {
          bVar7 = false;
        }
      }
      if (bVar8) {
        QMutex::unlock();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002804be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}

