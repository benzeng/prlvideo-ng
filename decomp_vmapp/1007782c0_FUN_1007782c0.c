
undefined4 FUN_1007782c0(int param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    lVar1 = cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    lVar1 = cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    lVar1 = cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    lVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    lVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    lVar1 = cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    lVar1 = cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    lVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    lVar1 = cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    lVar1 = cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    lVar1 = cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == -0x7ffffffe) {
    lVar1 = cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == -0x7ffffffd) {
    lVar1 = cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == -0x7ffffffc) {
    lVar1 = cpuid_brand_part3_info(0x80000004);
  }
  else {
    lVar1 = cpuid(param_1);
  }
  return *(undefined4 *)(lVar1 + 4);
}

