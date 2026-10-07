
undefined8 * FUN_10050a8f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  
  puVar2 = operator_new(0x110);
  *puVar2 = &PTR_FUN_100bc4420;
  puVar2[1] = 0x32aaaba7;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[9] = 0x3cb0b1bb;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0x10] = puVar2 + 0x11;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = puVar2 + 0x14;
  puVar2[0x16] = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  local_80 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_38 = FUN_10050c2a0;
  local_78 = puVar2 + 0x1c;
  uVar3 = _CFRunLoopSourceCreate(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,0,&local_80);
  puVar2[0x1c] = uVar3;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = puVar2;
  puVar2[0x1f] = FUN_10050b7d0;
  puVar2[0x20] = FUN_10050c290;
  plVar4 = operator_new(8);
  *plVar4 = (long)(puVar2 + 0x1c);
  iVar1 = _pthread_create((pthread_t *)(puVar2 + 0x21),(pthread_attr_t *)0x0,(void **)FUN_10050c2d0,
                          plVar4);
  if (iVar1 != 0) {
    std::__throw_system_error(iVar1,"thread constructor failed");
    operator_delete(plVar4);
  }
  *param_1 = puVar2;
  return param_1;
}

