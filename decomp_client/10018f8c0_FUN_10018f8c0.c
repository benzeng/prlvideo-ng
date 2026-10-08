
undefined8 FUN_10018f8c0(undefined8 param_1)

{
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getOsVersion();
  EnumUtils::OsVerToString((uint)param_1);
  return param_1;
}

