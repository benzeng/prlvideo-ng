
void FUN_100dc89e0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    piVar2 = (int *)cpuid_basic_info(0);
  }
  else if (iVar1 == 1) {
    piVar2 = (int *)cpuid_Version_info(1);
  }
  else if (iVar1 == 2) {
    piVar2 = (int *)cpuid_cache_tlb_info(2);
  }
  else if (iVar1 == 3) {
    piVar2 = (int *)cpuid_serial_info(3);
  }
  else if (iVar1 == 4) {
    piVar2 = (int *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (iVar1 == 5) {
    piVar2 = (int *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (iVar1 == 6) {
    piVar2 = (int *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (iVar1 == 7) {
    piVar2 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (iVar1 == 9) {
    piVar2 = (int *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (iVar1 == 10) {
    piVar2 = (int *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (iVar1 == 0xb) {
    piVar2 = (int *)cpuid_Extended_Topology_info(0xb);
  }
  else if (iVar1 == 0xd) {
    piVar2 = (int *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (iVar1 == 0xf) {
    piVar2 = (int *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (iVar1 == -0x7ffffffe) {
    piVar2 = (int *)cpuid_brand_part1_info(0x80000002);
  }
  else if (iVar1 == -0x7ffffffd) {
    piVar2 = (int *)cpuid_brand_part2_info(0x80000003);
  }
  else if (iVar1 == -0x7ffffffc) {
    piVar2 = (int *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    piVar2 = (int *)cpuid(iVar1);
  }
  iVar1 = piVar2[1];
  iVar3 = piVar2[2];
  iVar4 = piVar2[3];
  *param_1 = *piVar2;
  *param_2 = iVar4;
  *param_3 = iVar3;
  *param_4 = iVar1;
  return;
}

