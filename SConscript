Import('env')

env = env.Clone()

env['base_libs'] = ['rt', 'dl', 'ssl','crypto']
env['dev_libs'] = env['base_libs'] + ['log4cpp']
env['test_libs'] = env['base_libs'] + ['log4cpp']

env.Append(ACSUBST = {'BUILDDIR': env['RELATIVE_BUILD_DIR']})
env.Append(ACSUBST = {'TOP_BUILDDIR': env['BUILD_DIR']})
env.Append(ACSUBST = {'TOP_DIR': env['TOP_DIR']})

env.aDirs('log4cpp')