
void FUN_1002c7a70(undefined8 *param_1)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_100bb35e8;
  uVar2 = *(uint *)(param_1 + 0xb);
  if (uVar2 != 0) {
    lVar3 = 0;
    do {
      pvVar1 = (void *)param_1[lVar3 + 0xc];
      if (pvVar1 != (void *)0x0) {
        FUN_1002d6060(pvVar1);
        operator_delete(pvVar1);
        uVar2 = *(uint *)(param_1 + 0xb);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar2);
  }
  if (((undefined8 *)param_1[1] != param_1 + 1) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"hc.m_iso_out_list is not empty");
  }
  if (((undefined8 *)param_1[5] != param_1 + 5) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"hc.active_list is not empty");
  }
  if (((undefined8 *)param_1[3] != param_1 + 3) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"hc.stale_list is not empty");
    return;
  }
  return;
}

