
undefined8 FUN_10080b5d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long local_30;
  
  if (param_1[0x19] != 0) {
    FUN_10081d560("d1_both.c",0x4f2,"s->init_off == 0");
  }
  iVar1 = param_1[0x18];
  puVar4 = (undefined1 *)FUN_10081ddd0(0x68,"d1_both.c",0xb5);
  if (puVar4 == (undefined1 *)0x0) {
    return 0;
  }
  pvVar5 = (void *)0x0;
  if ((iVar1 != 0) &&
     (pvVar5 = (void *)FUN_10081ddd0(iVar1,"d1_both.c",0xba), pvVar5 == (void *)0x0))
  goto LAB_10080b7c0;
  *(void **)(puVar4 + 0x58) = pvVar5;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  _memcpy(pvVar5,*(void **)(*(long *)(param_1 + 0x14) + 8),(long)param_1[0x18]);
  if (param_2 == 0) {
    if (*(long *)(*(long *)(param_1 + 0x22) + 0x298) + 0xcU != (ulong)(uint)param_1[0x18]) {
      pcVar7 = "s->d1->w_msg_hdr.msg_len + DTLS1_HM_HEADER_LENGTH == (unsigned int)s->init_num";
      uVar8 = 0x501;
      goto LAB_10080b6d7;
    }
  }
  else {
    lVar6 = 1;
    if (*param_1 != 0xfeff) {
      lVar6 = 3;
    }
    if (lVar6 + *(long *)(*(long *)(param_1 + 0x22) + 0x298) != (ulong)(uint)param_1[0x18]) {
      pcVar7 = 
      "s->d1->w_msg_hdr.msg_len + ((s->version == DTLS1_VERSION) ? DTLS1_CCS_HEADER_LENGTH : 3) == (unsigned int)s->init_num"
      ;
      uVar8 = 0x4fe;
LAB_10080b6d7:
      FUN_10081d560("d1_both.c",uVar8,pcVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0x22);
  uVar8 = *(undefined8 *)(lVar6 + 0x298);
  *(undefined8 *)(puVar4 + 8) = uVar8;
  *(undefined2 *)(puVar4 + 0x10) = *(undefined2 *)(lVar6 + 0x2a0);
  *puVar4 = *(undefined1 *)(lVar6 + 0x290);
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  *(int *)(puVar4 + 0x28) = param_2;
  iVar1 = param_1[0x3b];
  iVar2 = param_1[0x3c];
  iVar3 = param_1[0x3d];
  *(int *)(puVar4 + 0x30) = param_1[0x3a];
  *(int *)(puVar4 + 0x34) = iVar1;
  *(int *)(puVar4 + 0x38) = iVar2;
  *(int *)(puVar4 + 0x3c) = iVar3;
  *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(param_1 + 0x3e);
  *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined2 *)(puVar4 + 0x50) = *(undefined2 *)(lVar6 + 0x20a);
  local_30 = (ulong)CONCAT11((char)*(undefined2 *)(puVar4 + 0x10) * '\x02' -
                             (char)*(undefined4 *)(puVar4 + 0x28),
                             (char)((uint)*(ushort *)(puVar4 + 0x10) * 2 - *(int *)(puVar4 + 0x28)
                                   >> 8)) << 0x30;
  lVar6 = FUN_1008dfc30(&local_30,puVar4);
  if (lVar6 != 0) {
    FUN_1008dfd00(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x268),lVar6);
    return 1;
  }
  if (*(int *)(puVar4 + 0x28) != 0) {
    FUN_10088bc70(*(undefined8 *)(puVar4 + 0x30));
    FUN_10088ae30(*(undefined8 *)(puVar4 + 0x38));
  }
  if (*(long *)(puVar4 + 0x58) != 0) {
    FUN_10081e1a0();
  }
  if (*(long *)(puVar4 + 0x60) != 0) {
    FUN_10081e1a0();
  }
LAB_10080b7c0:
  FUN_10081e1a0(puVar4);
  return 0;
}

