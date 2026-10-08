
void FUN_100b3dea0(QString param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CParallelsAdapter *this;
  QString this_00;
  CDHCPServer *pCVar5;
  CNATServer *this_01;
  ushort uVar6;
  undefined1 auVar7 [16];
  QHostAddress local_148 [8];
  QHostAddress local_140 [8];
  QHostAddress local_138 [8];
  QHostAddress local_130 [8];
  QArrayData *local_128;
  QArrayData *local_120;
  QHostAddress local_118 [8];
  QHostAddress local_110 [8];
  QHostAddress local_108 [8];
  QHostAddress local_100 [8];
  QHostAddress local_f8 [8];
  QHostAddress local_f0 [8];
  QHostAddress local_e8 [12];
  uint local_dc;
  uint local_d8;
  uint local_d4;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QHostAddress local_98 [8];
  QString local_90;
  QHostAddress local_88 [15];
  undefined1 local_79;
  ulong local_78;
  undefined6 local_70;
  undefined2 uStack_6a;
  QIPv6Address local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  CVirtualNetwork::setNetworkType(param_1.field0_0x0,1);
  CVirtualNetwork::getNetworkID();
  iVar2 = *(int *)(local_a8 + 4);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_79 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100b3df1d;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b3df1d:
  if (iVar2 == 0) {
    FUN_100b3d9d0(&local_b0,param_2,param_3);
    local_b8 = local_b0;
    if (1 < *(int *)local_b0 + 1U) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_79 = *(int *)local_b0 != 0;
      UNLOCK();
    }
    CVirtualNetwork::setNetworkID(param_1);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_79 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100b3dfa0;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100b3dfa0:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_79 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100b3dfcf;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
  }
LAB_100b3dfcf:
  CVirtualNetwork::getDescription();
  iVar2 = *(int *)(local_c0 + 4);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_79 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100b3e017;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100b3e017:
  if (iVar2 == 0) {
    FUN_100b3dae0(&local_c8,param_2,param_3);
    local_d0 = local_c8;
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_79 = *(int *)local_c8 != 0;
      UNLOCK();
    }
    CVirtualNetwork::setDescription(param_1);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_79 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100b3e09a;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100b3e09a:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_79 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_100b3e0c9;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
  }
LAB_100b3e0c9:
  this = (CParallelsAdapter *)CVirtualNetwork::getHostOnlyNetwork();
  if (this == (CParallelsAdapter *)0x0) {
    this = operator_new(0xf8);
    CHostOnlyNetwork::CHostOnlyNetwork((CHostOnlyNetwork *)this);
    CVirtualNetwork::setHostOnlyNetwork((CHostOnlyNetwork *)param_1.field0_0x0);
  }
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  FUN_100b3dbf0(param_2,&local_d4,&local_d8,&local_dc);
  uVar3 = local_d4;
  QHostAddress::QHostAddress(local_e8,local_d4);
  CHostOnlyNetwork::setDhcpIPAddress(this,local_e8);
  QHostAddress::~QHostAddress(local_e8);
  QHostAddress::QHostAddress(local_f0,uVar3 + 1);
  CHostOnlyNetwork::setHostIPAddress(this,local_f0);
  QHostAddress::~QHostAddress(local_f0);
  QHostAddress::QHostAddress(local_f8,local_dc);
  CHostOnlyNetwork::setIPNetMask(this,local_f8);
  QHostAddress::~QHostAddress(local_f8);
  QHostAddress::QHostAddress(local_100,5);
  local_68 = (QIPv6Address  [16])QHostAddress::toIPv6Address();
  local_58 = (undefined1  [16])local_68;
  local_48 = (undefined1  [16])local_68;
  QHostAddress::~QHostAddress(local_100);
  local_90.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("ffff:ffff:ffff:ffff:0:0:0:0",0x1b);
  QHostAddress::QHostAddress(local_88,&local_90);
  auVar7 = QHostAddress::toIPv6Address();
  local_68 = (QIPv6Address  [16])auVar7;
  QHostAddress::~QHostAddress(local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_79 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100b3e283;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100b3e283:
  local_a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fdb2:2c26:f4e4::",0x10);
  QHostAddress::QHostAddress(local_98,&local_a0);
  auVar7 = QHostAddress::toIPv6Address();
  QHostAddress::~QHostAddress(local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_79 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100b3e309;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100b3e309:
  uVar6 = ((ushort)((auVar7._0_8_ >> 0x30) << 8) | (ushort)auVar7[7]) + (short)param_2;
  local_78 = auVar7._0_8_ & 0xffffffffffff | (ulong)(ushort)(uVar6 * 0x100 | uVar6 >> 8) << 0x30;
  iVar2 = CONCAT11(auVar7[0xe],auVar7[0xf]) - 1;
  uVar3 = CONCAT11(auVar7[0xc],auVar7[0xd]) - 1;
  local_58._8_6_ = CONCAT15((char)uVar3,(uint5)(uVar3 >> 8 & 0xff) << 0x20);
  uVar1 = CONCAT26(CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8)),local_58._8_6_);
  iVar2 = CONCAT11(auVar7[10],auVar7[0xb]) - 1;
  local_58._8_2_ = CONCAT11(auVar7[8],auVar7[9]);
  iVar4 = CONCAT22(0,local_58._8_2_) - 1;
  local_58._8_2_ = CONCAT11((char)iVar4,(char)((uint)iVar4 >> 8));
  local_58._8_8_ =
       CONCAT62(CONCAT42((int)((ulong)uVar1 >> 0x20),CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8)))
                ,local_58._8_2_);
  local_70 = auVar7._8_6_;
  _local_70 = CONCAT16(auVar7[0xf],local_70);
  _local_70 = CONCAT17(auVar7[0xe],_local_70);
  uVar3 = (uint)uStack_6a;
  _local_70 = CONCAT16((char)(uVar3 + 1 >> 8),local_70);
  _local_70 = CONCAT17((char)(uVar3 + 1),_local_70);
  local_58._0_8_ = local_78;
  local_48._0_8_ = local_78;
  local_48._8_8_ = auVar7._8_8_;
  QHostAddress::QHostAddress(local_108,(QIPv6Address *)local_48);
  CHostOnlyNetwork::setDhcpIP6Address(this,local_108);
  QHostAddress::~QHostAddress(local_108);
  QHostAddress::QHostAddress(local_110,(QIPv6Address *)&local_78);
  CHostOnlyNetwork::setHostIP6Address(this,local_110);
  QHostAddress::~QHostAddress(local_110);
  QHostAddress::QHostAddress(local_118,local_68);
  CHostOnlyNetwork::setIP6NetMask(this,local_118);
  QHostAddress::~QHostAddress(local_118);
  this_00.field0_0x0 = (QTypedArrayData<unsigned_short> *)CHostOnlyNetwork::getParallelsAdapter();
  if (this_00.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    this_00.field0_0x0 = operator_new(0xa8);
    CParallelsAdapter::CParallelsAdapter((CParallelsAdapter *)this_00.field0_0x0);
    CHostOnlyNetwork::setParallelsAdapter(this);
  }
  FUN_100b3d920(&local_120,param_2,param_3);
  CParallelsAdapter::setHiddenAdapter(SUB81(this_00.field0_0x0,0));
  local_128 = local_120;
  if (1 < *(int *)local_120 + 1U) {
    LOCK();
    *(int *)local_120 = *(int *)local_120 + 1;
    local_79 = *(int *)local_120 != 0;
    UNLOCK();
  }
  CParallelsAdapter::setName(this_00);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_79 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100b3e532;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b3e532:
  CParallelsAdapter::setPrlAdapterIndex((int)this_00.field0_0x0);
  pCVar5 = (CDHCPServer *)CHostOnlyNetwork::getDHCPServer();
  if (pCVar5 == (CDHCPServer *)0x0) {
    pCVar5 = operator_new(0xb8);
    CDHCPServer::CDHCPServer(pCVar5);
    CHostOnlyNetwork::setDHCPServer((CDHCPServer *)this);
  }
  CDHCPServer::setEnabled(SUB81(pCVar5,0));
  QHostAddress::QHostAddress(local_130,local_d4);
  CDHCPServer::setIPScopeStart(pCVar5,local_130);
  QHostAddress::~QHostAddress(local_130);
  QHostAddress::QHostAddress(local_138,local_d8);
  CDHCPServer::setIPScopeEnd(pCVar5,local_138);
  QHostAddress::~QHostAddress(local_138);
  pCVar5 = (CDHCPServer *)CHostOnlyNetwork::getDHCPv6ServerOrig();
  if (pCVar5 == (CDHCPServer *)0x0) {
    pCVar5 = operator_new(0xb8);
    CDHCPServer::CDHCPServer(pCVar5);
    FUN_100b45f90(this,pCVar5);
  }
  CDHCPServer::setEnabled(SUB81(pCVar5,0));
  QHostAddress::QHostAddress(local_140,(QIPv6Address *)local_48);
  CDHCPServer::setIPScopeStart(pCVar5,local_140);
  QHostAddress::~QHostAddress(local_140);
  QHostAddress::QHostAddress(local_148,(QIPv6Address *)local_58);
  CDHCPServer::setIPScopeEnd(pCVar5,local_148);
  QHostAddress::~QHostAddress(local_148);
  this_01 = (CNATServer *)CHostOnlyNetwork::getNATServer();
  if (this_01 == (CNATServer *)0x0) {
    this_01 = operator_new(0xc0);
    CNATServer::CNATServer(this_01);
    CHostOnlyNetwork::setNATServer((CNATServer *)this);
  }
  if ((param_2 == 0) && (param_3 == '\x01')) {
    CNATServer::setEnabled(SUB81(this_01,0));
  }
  else {
    CNATServer::setEnabled(SUB81(this_01,0));
  }
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_79 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100b3e6f1;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100b3e6f1:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

