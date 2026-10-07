
int FUN_100086940(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  bool bVar10;
  undefined1 local_540 [1288];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1007da1e0(local_540,param_1 + 0x4a4,0x500);
  plVar9 = (long *)FUN_1000a3990(DAT_1011c3698);
  iVar4 = -0x7ffffe68;
  if (plVar9 == (long *)0x0) goto LAB_100086dc2;
  iVar4 = (**(code **)(*plVar9 + 0x140))
                    (plVar9,*(undefined8 *)(param_1 + 0x488),param_2,param_3,param_5,param_6,param_4
                    );
  (**(code **)(*plVar9 + 8))(plVar9);
  if (iVar4 < 0) goto LAB_100086dc2;
  bVar1 = *(byte *)(param_3 + 0x18);
  uVar6 = (uint)bVar1;
  if ((*(int *)(param_1 + 0x9bc) == 0) &&
     (uVar5 = FUN_1000ef0c0(*(undefined4 *)(param_1 + 0x46c)), uVar5 <= bVar1)) {
    uVar6 = FUN_1000ef0c0(*(undefined4 *)(param_1 + 0x46c));
  }
  if (uVar6 < 0x25) {
    uVar6 = 0x24;
  }
  *(char *)(param_3 + 0x18) = (char)uVar6;
  iVar4 = FUN_1007da320(local_540,"kernel.enable_x64",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0xc) = *(byte *)(param_3 + 0xc) & 0xfe;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xdffff7ff;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.nxbit.enable",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) & 0xef;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.vcpu.mmx",1);
  if ((iVar4 == 0) &&
     (*(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) & 0xfe7fffff, *(int *)(param_2 + 0x86) == 2))
  {
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0x3fbfffff;
  }
  uVar7 = FUN_1007da320(local_540,"kernel.vcpu.sse",4);
  switch(uVar7) {
  case 0:
    uVar6 = *(uint *)(param_3 + 4) & 0xfdffffff;
    *(uint *)(param_3 + 4) = uVar6;
    break;
  case 1:
    uVar6 = *(uint *)(param_3 + 4);
    break;
  case 2:
    goto switchD_100086acc_caseD_2;
  case 3:
    uVar6 = *(uint *)(param_3 + 8);
    goto LAB_100086b0a;
  default:
    goto switchD_100086acc_default;
  }
  *(uint *)(param_3 + 4) = uVar6 & 0xfbffffff;
switchD_100086acc_caseD_2:
  uVar6 = *(uint *)(param_3 + 8) & 0xfffffffe;
  *(uint *)(param_3 + 8) = uVar6;
LAB_100086b0a:
  *(uint *)(param_3 + 8) = uVar6 & 0xff67ffff;
  if (*(int *)(param_2 + 0x86) == 2) {
    *(byte *)(param_3 + 0xc) = *(byte *)(param_3 + 0xc) & 0x9f;
  }
switchD_100086acc_default:
  iVar4 = FUN_1007da320(local_540,"kernel.xsave",1);
  if (iVar4 == 0) {
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffffe;
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0xebffffff;
  }
  else {
    iVar4 = FUN_1007da320(local_540,"kernel.avx",(*(uint *)(param_1 + 0x480) & 0xffffff00) != 0xf00)
    ;
    if (iVar4 == 0) {
      *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0xef;
    }
  }
  uVar2 = CVmCpu::isVirtualizedHV();
  iVar4 = FUN_1007da320(local_540,"kernel.nvmx.enable",uVar2);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) & 0xdf;
  }
  uVar2 = CVmCpu::isVirtualizedHV();
  iVar4 = FUN_1007da320(local_540,"kernel.nsvm.enable",uVar2);
  if (iVar4 == 0) {
    *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xffffeffb;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.pcid",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) & 0xfd;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.pse36.enable",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) & 0xfd;
  }
  uVar6 = *(uint *)(param_1 + 0xa1c);
  if ((uVar6 & 0x20) == 0) {
    *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) & 0xdf;
    uVar6 = *(uint *)(param_1 + 0xa1c);
  }
  if ((uVar6 & 8) == 0) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) & 0xfd;
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0xfedfffff;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.invariant_tsc",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0x15) = *(byte *)(param_3 + 0x15) & 0xfe;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.monitor_mwait",
                        (*(uint *)(param_1 + 0x480) & 0xffffff00) == 0x700);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) & 0xf7;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.smep.enable",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0x1c) = *(byte *)(param_3 + 0x1c) & 0x7f;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.rdfsgsbase.enable",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0x1c) = *(byte *)(param_3 + 0x1c) & 0xfe;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.invpcid.enable",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0x1d) = *(byte *)(param_3 + 0x1d) & 0xfb;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.rdtscp.enable",1);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 0x13) = *(byte *)(param_3 + 0x13) & 0xf7;
  }
  uVar2 = CVmCpu::isVirtualizePMU();
  iVar4 = FUN_1007da320(local_540,"kernel.perf_mon.enable",uVar2);
  if (iVar4 == 0) {
    *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) & 0xdf;
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0xffff7feb;
  }
  cVar3 = CVmCpu::isVirtualizedHV();
  bVar10 = true;
  if (cVar3 != '\0') {
    bVar10 = (*(uint *)(param_1 + 0x480) & 0xffffff00) != 0x800 ||
             *(uint *)(param_1 + 0x480) < 0x80c;
  }
  iVar4 = FUN_1007da320(local_540,"kernel.report_virt",bVar10);
  if (iVar4 != 0) {
    *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 0x80;
  }
  iVar8 = FUN_1007da320(local_540,"kernel.thermal",*(uint *)(param_2 + 0x82) >> 6 & 1);
  iVar4 = 0;
  if (iVar8 == 0) {
    *(byte *)(param_3 + 0x24) = *(byte *)(param_3 + 0x24) & 0xae;
  }
LAB_100086dc2:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

