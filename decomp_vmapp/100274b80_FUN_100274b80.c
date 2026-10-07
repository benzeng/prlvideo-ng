
void FUN_100274b80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::sprintf((char *)&local_30,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"activate");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_28 + *(long *)(local_28 + 0x10));
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274c0b;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100274c0b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274c3b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100274c3b:
  local_40 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_40,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"bytes_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_38 + *(long *)(local_38 + 0x10));
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274cae;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100274cae:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274cde;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100274cde:
  local_50 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_50,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"bytes_out")
  ;
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_48 + *(long *)(local_48 + 0x10));
  *(undefined8 *)(param_1 + 200) = uVar2;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274d51;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100274d51:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274d81;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100274d81:
  local_60 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_60,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"pkts_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_58 + *(long *)(local_58 + 0x10));
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274df4;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100274df4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274e24;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100274e24:
  local_70 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_70,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"pkts_out");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_68 + *(long *)(local_68 + 0x10));
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274e97;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100274e97:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274ec7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100274ec7:
  local_80 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_80,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"bcast_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_78 + *(long *)(local_78 + 0x10));
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274f3a;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100274f3a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274f6a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100274f6a:
  local_90 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_90,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"mcast_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_88 + *(long *)(local_88 + 0x10));
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100274fe3;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_100274fe3:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275019;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100275019:
  local_a0 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_a0,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "pkt_dropped_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_98 + *(long *)(local_98 + 0x10));
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027509e;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_10027509e:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002750d4;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002750d4:
  local_b0 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_b0,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),"pkt_err_in"
                  );
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_a8 + *(long *)(local_a8 + 0x10));
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275159;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_100275159:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_19 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027518f;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10027518f:
  local_c0 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_c0,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "pkt_err_out");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_b8 + *(long *)(local_b8 + 0x10));
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275214;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_100275214:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_19 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027524a;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10027524a:
  local_d0 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_d0,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "rl.tail_dropped_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_c8 + *(long *)(local_c8 + 0x10));
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_19 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002752cf;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_1002752cf:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275305;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100275305:
  local_e0 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_e0,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "rl.tail_dropped_out");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_d8 + *(long *)(local_d8 + 0x10));
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_19 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027538a;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_10027538a:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_19 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002753c0;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1002753c0:
  local_f0 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_f0,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "immitated.dropped_in");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_e8 + *(long *)(local_e8 + 0x10));
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_19 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275445;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_100275445:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_19 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027547b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10027547b:
  local_100 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_100,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "immitated.dropped_out");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_f8 + *(long *)(local_f8 + 0x10));
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_19 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275500;
    }
    QArrayData::deallocate(local_f8,1,8);
  }
LAB_100275500:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_19 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275536;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100275536:
  local_110 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_110,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "send_buffer_notifications");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_108 + *(long *)(local_108 + 0x10));
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_19 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002755bb;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_1002755bb:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_19 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002755f1;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1002755f1:
  local_120 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_120,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "pkt_err_security");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_118 + *(long *)(local_118 + 0x10));
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_19 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275676;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100275676:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_19 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002756ac;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1002756ac:
  local_130 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_130,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "rx_buffer_notifications");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_128 + *(long *)(local_128 + 0x10));
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_19 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275731;
    }
    QArrayData::deallocate(local_128,1,8);
  }
LAB_100275731:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275767;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100275767:
  local_140 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_140,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "generic_err");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_138 + *(long *)(local_138 + 0x10));
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_19 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002757ec;
    }
    QArrayData::deallocate(local_138,1,8);
  }
LAB_1002757ec:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_19 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100275822;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100275822:
  local_150 = (QArrayData *)puVar1;
  QString::sprintf((char *)&local_150,"I@net.nic%u.%s",(ulong)*(uint *)(param_1 + 0x150),
                   "arps_blocked");
  QString::toLatin1();
  uVar2 = FUN_10070e6f0(local_148 + *(long *)(local_148 + 0x10));
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_19 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002758a7;
    }
    QArrayData::deallocate(local_148,1,8);
  }
LAB_1002758a7:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      UNLOCK();
      if (*(int *)local_150 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_150,2,8);
  }
  return;
}

