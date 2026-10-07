
void _xmlParserValidityWarning(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00010013f144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_10013f166 + (ulong)in_AL * -4))(ctx,msg,&LAB_10013f166 + (ulong)in_AL * -4);
  return;
}

