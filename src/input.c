/* Generated from core/input.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0 (rev e31bbee5)
   freebsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: core/input.scm -output-file input.c -static -unit input -emit-all-import-libraries -emit-link-file input.link
   unit: input
   uses: eval srfi-127 srfi-121 utf8 library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d127_toplevel)
C_externimport void C_ccall C_srfi_2d127_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d121_toplevel)
C_externimport void C_ccall C_srfi_2d121_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utf8_toplevel)
C_externimport void C_ccall C_utf8_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[7];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,97,49,53,50,32,121,105,101,108,100,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,39),40,112,104,111,116,111,110,46,105,110,112,117,116,35,109,97,107,101,45,99,104,97,114,45,103,101,110,101,114,97,116,111,114,32,112,111,114,116,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,30),40,112,104,111,116,111,110,46,105,110,112,117,116,35,112,111,114,116,45,62,108,115,101,113,32,112,111,114,116,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_133)
static void C_ccall f_133(C_word c,C_word *av) C_noret;
C_noret_decl(f_136)
static void C_ccall f_136(C_word c,C_word *av) C_noret;
C_noret_decl(f_139)
static void C_ccall f_139(C_word c,C_word *av) C_noret;
C_noret_decl(f_142)
static void C_ccall f_142(C_word c,C_word *av) C_noret;
C_noret_decl(f_145)
static void C_ccall f_145(C_word c,C_word *av) C_noret;
C_noret_decl(f_147)
static void C_ccall f_147(C_word c,C_word *av) C_noret;
C_noret_decl(f_153)
static void C_ccall f_153(C_word c,C_word *av) C_noret;
C_noret_decl(f_159)
static void C_ccall f_159(C_word c,C_word *av) C_noret;
C_noret_decl(f_167)
static void C_ccall f_167(C_word c,C_word *av) C_noret;
C_noret_decl(C_input_toplevel)
C_externexport void C_ccall C_input_toplevel(C_word c,C_word *av) C_noret;

/* k131 */
static void C_ccall f_133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_133,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k134 in k131 */
static void C_ccall f_136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_136,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_utf8_toplevel(2,av2);}}

/* k137 in k134 in k131 */
static void C_ccall f_139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_139,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_142,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d121_toplevel(2,av2);}}

/* k140 in k137 in k134 in k131 */
static void C_ccall f_142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_142,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d127_toplevel(2,av2);}}

/* k143 in k140 in k137 in k134 in k131 */
static void C_ccall f_145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_145,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[2]+1 /* (set! photon.input#make-char-generator ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_147,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[5]+1 /* (set! photon.input#port->lseq ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_159,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* photon.input#make-char-generator in k143 in k140 in k137 in k134 in k131 */
static void C_ccall f_147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_147,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_153,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/input.scm:13: srfi-121#make-coroutine-generator"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2=av;
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a152 in photon.input#make-char-generator in k143 in k140 in k137 in k134 in k131 */
static void C_ccall f_153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_153,c,av);}
C_trace(C_text("core/input.scm:15: utf8#read-char"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* photon.input#port->lseq in k143 in k140 in k137 in k134 in k131 */
static void C_ccall f_159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_159,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_167,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/input.scm:19: make-char-generator"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k165 in photon.input#port->lseq in k143 in k140 in k137 in k134 in k131 */
static void C_ccall f_167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_167,c,av);}
C_trace(C_text("core/input.scm:18: srfi-127#generator->lseq"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_input_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("input"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_input_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(49))){
C_save(t1);
C_rereclaim2(49*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,7);
lf[0]=C_h_intern(&lf[0],5, C_text("input"));
lf[1]=C_h_intern(&lf[1],13, C_text("photon.input#"));
lf[2]=C_h_intern(&lf[2],32, C_text("photon.input#make-char-generator"));
lf[3]=C_h_intern(&lf[3],14, C_text("utf8#read-char"));
lf[4]=C_h_intern(&lf[4],33, C_text("srfi-121#make-coroutine-generator"));
lf[5]=C_h_intern(&lf[5],23, C_text("photon.input#port->lseq"));
lf[6]=C_h_intern(&lf[6],24, C_text("srfi-127#generator->lseq"));
C_register_lf2(lf,7,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_133,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[11] = {
{C_text("f_133:core_2finput_2escm"),(void*)f_133},
{C_text("f_136:core_2finput_2escm"),(void*)f_136},
{C_text("f_139:core_2finput_2escm"),(void*)f_139},
{C_text("f_142:core_2finput_2escm"),(void*)f_142},
{C_text("f_145:core_2finput_2escm"),(void*)f_145},
{C_text("f_147:core_2finput_2escm"),(void*)f_147},
{C_text("f_153:core_2finput_2escm"),(void*)f_153},
{C_text("f_159:core_2finput_2escm"),(void*)f_159},
{C_text("f_167:core_2finput_2escm"),(void*)f_167},
{C_text("toplevel:core_2finput_2escm"),(void*)C_input_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|safe globals: (photon.input#port->lseq photon.input#make-char-generator) 
o|replaced variables: 4 
o|removed binding forms: 8 
o|removed binding forms: 4 
*/
/* end of file */
