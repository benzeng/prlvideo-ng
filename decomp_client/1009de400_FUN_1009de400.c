
undefined8 * FUN_1009de400(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_2 + 0x10) != 2) {
    FUN_100df99c0("","ProxyInfo",0,"ASSERT( %s ) occured in %s:%d [%s]","m_state == stFinished",
                  "CProxyInfo_mac.cpp",0x1db,"getResult");
    if (*(int *)(param_2 + 0x10) != 2) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_10227e3b8;
        puVar3 = puVar2;
      }
      goto LAB_1009de55c;
    }
  }
  puVar2 = operator_new(0x20);
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0x28) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x28) + 0x10);
  }
  piVar1 = (int *)*puVar3;
  *puVar2 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 1);
  piVar1 = (int *)puVar3[2];
  puVar2[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 1);
  piVar1 = (int *)puVar3[3];
  puVar2[3] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 1);
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1009debe0(puVar2);
    operator_delete(puVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = puVar2;
    *puVar3 = &PTR_FUN_10227e3b8;
  }
LAB_1009de55c:
  *param_1 = puVar3;
  return param_1;
}

