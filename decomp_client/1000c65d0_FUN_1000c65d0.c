
void FUN_1000c65d0(long *param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  bool bVar9;
  long lVar10;
  Connection local_70 [8];
  long *local_68;
  long local_60;
  long local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  
  QMutex::lock();
  *(byte *)((long)param_1 + 0x10c) = param_2 & 1;
  puVar4 = (uint *)param_1[0xb];
  if ((int)puVar4[2] < (int)puVar4[3]) {
    plVar2 = param_1 + 0xb;
    lVar10 = 0;
    bVar9 = false;
    do {
      if (1 < *puVar4) {
        FUN_1000e6e10(plVar2,puVar4[1]);
        puVar4 = (uint *)*plVar2;
      }
      lVar1 = *(long *)(puVar4 + ((int)puVar4[2] + lVar10) * 2 + 4);
      if ((*(int *)(*(long *)(lVar1 + 0x38) + 0xc) == *(int *)(*(long *)(lVar1 + 0x38) + 8)) &&
         ((*(byte *)(lVar1 + 0x24) & 1) != 0)) {
        *(undefined4 *)(lVar1 + 0x24) = 4;
        uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
        bVar9 = true;
        FUN_1000e8fd0(uVar5,lVar1 + 8);
      }
      cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar3 == '\0') {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                        *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34),0x404);
        }
        FUN_1000c6a60(param_1,lVar1 + 0x30);
      }
      lVar10 = lVar10 + 1;
      puVar4 = (uint *)*plVar2;
    } while (lVar10 < (long)(int)puVar4[3] - (long)(int)puVar4[2]);
  }
  else {
    bVar9 = false;
  }
  FUN_1000b9840(param_1,param_1 + 0xd);
  FUN_1000e4950(param_1 + 0xd);
  plVar2 = param_1 + 2;
  FUN_1000ae430(&local_58,param_1[10],plVar2);
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    lVar10 = local_58 + 0x10 + (long)*(int *)(local_58 + 8) * 8;
    do {
      FUN_1000b89f0(param_1,lVar10);
      lVar10 = lVar10 + 8;
    } while (lVar10 != local_58 + 0x10 + (long)*(int *)(local_58 + 0xc) * 8);
  }
  FUN_1000ae460(&local_60,param_1[10],plVar2);
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    lVar10 = local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8;
    do {
      FUN_1000c6cc0(param_1,lVar10);
      lVar10 = lVar10 + 8;
    } while (lVar10 != local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
  }
  if ((int)param_1[0x13] != 0) {
    uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e9560(uVar5,param_1 + 0x12,(int)param_1[0x13]);
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  if (bVar9) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  puVar6 = operator_new(0x10);
  *puVar6 = &PTR_FUN_1021ee368;
  puVar6[1] = param_1;
  local_68 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (local_68 == (long *)0x0) {
    operator_delete(puVar6);
    local_68 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_68 + 1) = 1;
    local_68[2] = (long)puVar6;
    *local_68 = (long)&PTR_FUN_10226ce10;
  }
  FUN_1000eef10(param_1 + 0x17,&local_68);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (param_1[0x4e] == 0) {
    uVar5 = FUN_100152280();
    uVar5 = FUN_1001548f0(uVar5,plVar2);
    uVar5 = FUN_10018c280(uVar5);
    uVar5 = FUN_100319c30(uVar5);
    plVar7 = operator_new(0x18);
    FUN_1000ef9a0(plVar7,uVar5);
    plVar2 = (long *)param_1[0x4e];
    if ((plVar2 != plVar7) && (plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x20))();
    }
    param_1[0x4e] = (long)plVar7;
    local_40 = FUN_1007f8af0;
    local_38 = 0;
    local_50 = FUN_1000c6e70;
    local_48 = 0;
    puVar8 = operator_new(0x20);
    *puVar8 = 1;
    *(code **)(puVar8 + 2) = FUN_1000e74e0;
    *(code **)(puVar8 + 4) = FUN_1000c6e70;
    *(undefined8 *)(puVar8 + 6) = 0;
    QObject::connectImpl
              (local_70,plVar7,&local_40,param_1,&local_50,puVar8,0,0,
               &PTR_staticMetaObject_1021f9050);
    QMetaObject::Connection::~Connection(local_70);
    FUN_1000efae0(param_1[0x4e]);
  }
  FUN_100039a80(&local_60);
  FUN_100039a80(&local_58);
  QMutex::unlock();
  return;
}

