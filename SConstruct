import sys, os, os.path, platform, re, time
from SCons.Tool.ascons.PathListVariable import PathListVariable

env = Environment(tools=['default', 'ascons'])
env.requireVersion(6)
env['project_name'] = 'log4cpp'
env['package_name'] = env['project_name']
env['version'] = '0.1'

env.SConscript(
    dirs='.',
    exports='env',
    variant_dir=env['BUILD_DIR'],
    duplicate=1    
)